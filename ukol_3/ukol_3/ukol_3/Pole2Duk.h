#pragma once
#include <exception>
#include <iostream>
using namespace std;

class Pole2Duk
{
private:
	int m, n;	// m ... pocet radku; n ... pocet sloupcu
	int** p;

public:
	Pole2Duk(int m, int n);
	virtual ~Pole2Duk();
	int PocetRadku() const;
	int PocetSloupcu() const;
	void SetValue(int value, int m_pos, int n_pos);
	int GetValue(int m_pos, int n_pos) const;
	int** operator[](int index);
	int IndexOf(int value, int* m_pos, int* n_pos) const;

	void init(int m, int n);
	Pole2Duk* operator+(const Pole2Duk m1);
	Pole2Duk* operator*(const Pole2Duk m1);
	bool operator==(const Pole2Duk m1);
	void realoc(int m_new, int n_new);
	static void tisk(const Pole2Duk& m);

};

Pole2Duk::Pole2Duk(int m, int n)
{
	// init vektoru
	init(m, n);
	/*
	this->m = m;
	this->n = n;
	p = new int*[this->m * this->n];
	for (int i = 0; i < this->m * this->n; i++)
		p[i] = new int();
	*/
}

/* virtual */ Pole2Duk::~Pole2Duk()
{
	// dealokace
	for (int i = 0; i < this->m * this->n; i++)
	{
		delete p[i];
		p[i] = NULL;
	}
	delete[] * p;   // !!!
	p = NULL;
}

void Pole2Duk::init(int m, int n)
{
	if (p != NULL)
	{
		// odstranit starou alookaci
		for (int i = 0; i < this->m * this->n; i++)
		{
			delete p[i];
			p[i] = NULL;
		}
		delete[] * p;   // !!!
		p = NULL;
	}
	// vytvorit novou alokaci
	this->m = m;
	this->n = n;
	p = new int* [this->m * this->n];
	for (int i = 0; i < this->m * this->n; i++)
		p[i] = new int();
}

int Pole2Duk::PocetRadku() const
{
	return m;
}

int Pole2Duk::PocetSloupcu() const
{
	return n;
}

void Pole2Duk::SetValue(int value, int m_pos, int n_pos)
{
	// {m_pos, n_pos} -> {index}
	if ((m_pos >= 0 && n_pos >= 0) && (m_pos < m && n_pos < n))		// !!! kontrola pristupu k prvku na pozici
		*p[m_pos * n + n_pos] = value;
}

int Pole2Duk::GetValue(int m_pos, int n_pos) const
{
	// {m_pos, n_pos} -> {index}
	if ((m_pos >= 0 && n_pos >= 0) && (m_pos < m && n_pos < n))		// !!! kontrola pristupu k prvku na pozici
		return *p[m_pos * n + n_pos];
}

int** Pole2Duk::operator[](int index)
{
	if (index >= 0 && index < m)		// !!! kontrola existujiciho radku
		return p + index * this->n;
	else
		return NULL;
}

int Pole2Duk::IndexOf(int value, int* m_pos, int* n_pos) const
{
	// vyuziti transformace {r, s} -> {index}, {index} -> {r, s}

	// verze 1
	for (int i = 0; i < m * n; i++)
		if (*p[i] == value)
		{
			*m_pos = i / n; // this->n;
			*n_pos = i % n; // this->n;
			return 1;
		}
	*m_pos = -1;
	*n_pos = -1;
	return 0;

	// ---
	/*
	// verze 2
	for (int i = 0; i < this->m; i++)
		for (int j = 0; j < this->n; j++)
			if (GetValue(i, j) == value)
			{
				*m_pos = i;
				*n_pos = j;
				return 1;
			}
	*m_pos = -1;
	*n_pos = -1;
	return 0;
	*/
}

// --- todo DU
Pole2Duk* Pole2Duk::operator+(const Pole2Duk m1)
{

	if (m1.m != this->m || m1.n != this->n)		// kontrola, ze maji matice stejny rozmer
		return NULL;

	Pole2Duk* tmppole = new Pole2Duk(this->m, this->n);
	for (int i = 0; i < this->m; i++)
		for (int j = 0; j < this->n; j++) {
			tmppole->SetValue(this->GetValue(i, j) + m1.GetValue(i, j), i, j);
		}
	return tmppole;
}


Pole2Duk* Pole2Duk::operator*(const Pole2Duk m1)
{
	if (m1.m != this->n)		// kontrola, ze maji matice nasobitelny rozmer
		return NULL;
	Pole2Duk* tmppole = new Pole2Duk(this->m, m1.n);
	int value = 0;
	for (int i = 0; i < this->m; i++)
		for (int j = 0; j < m1.n; j++) {
			tmppole->SetValue(0, i, j);
			value = 0;
			for (int k = 0; k < this->n; k++) {
				value = tmppole->GetValue(i, j);
				value += this->GetValue(i, k) * m1.GetValue(k, j);
				tmppole->SetValue(value, i, j);
			}
		}
	return tmppole;
}

void Pole2Duk::realoc(int m_new, int n_new)
{
	if (m_new < this->m || n_new < this->n) {
		cout << "ERROR: realloc pouze na vesti pole" << endl;
		return;
	}

	int** newpole = new int* [m_new * n_new];
	for (int i = 0; i < m_new * n_new; i++) {
		newpole[i] = new int();
	}

	for (int i = 0; i < this->m; i++)
		for (int j = 0; j < this->n; j++)
			*newpole[i * m_new + j] = this->GetValue(i, j);

	int** tmp = p;
	this->p = newpole;

	//dealokace pomocne promenne
	for (int i = 0; i < this->m * this->n; i++)
	{
		delete tmp[i];
		tmp[i] = NULL;

	}
	delete[] * tmp;   // !!!
	tmp = NULL;

	this->n = n_new;
	this->m = m_new;
	return;
}

// --- todo DU

bool Pole2Duk::operator==(const Pole2Duk m1)
{
	if (this->m != m1.m || this->n != m1.n)
		return false;
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m1.n; j++)
			{
				if (this->GetValue(i, j) != m1.GetValue(i, j))
					return false;
			}
		}

		return true;
	}
}

/* static */ void Pole2Duk::tisk(const Pole2Duk& m)
{
	// todo
	for (int i = 0; i < m.m; i++)
	{
		for (int j = 0; j < m.n; j++)
			cout << m.GetValue(i, j) << ';';
		cout << '\n';
	}
}


