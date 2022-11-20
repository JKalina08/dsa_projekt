#pragma once
#include <exception>
#include <iostream>
using namespace std;

class Pole2Duk_2
{
private:
	int m, n;	// m ... pocet radku; n ... pocet sloupcu
	int*** p = NULL;

public:
	Pole2Duk_2(int m, int n);
	~Pole2Duk_2();
	int PocetRadku() const;
	int PocetSloupcu() const;
	void SetValue(int value, int m_pos, int n_pos);
	int GetValue(int m_pos, int n_pos) const;
	int** operator[](int index);
	int IndexOf(int value, int* m_pos, int* n_pos) const;

	void init(int m, int n);
	Pole2Duk_2* operator+(const Pole2Duk_2 m1);
	Pole2Duk_2* operator*(const Pole2Duk_2 m1);
	void realoc(int m_new, int n_new);
	static void tisk(const Pole2Duk_2& m);

};

Pole2Duk_2::Pole2Duk_2(int m, int n)
{
	// init vektoru
	init(m, n);
	/*
		this->m = m;
		this->n = n;
		p = new int* [this->m];
		for (int i = 0; i < this->n; i++)
			p[i] = new int[this->n];
	*/
}

Pole2Duk_2::~Pole2Duk_2()
{
	// dealokace
	for (int i = 0; i < this->m; i++) {
		for (int j = 0; j < this->n; j++)
		{
			delete p[i][j];
			p[i][j] = NULL;
		}
		delete[] * p[i];
		p[i] = NULL;
	}
	delete[] * p;
	p = NULL;
}

void Pole2Duk_2::init(int m, int n)
{
	if (p != NULL)
	{
		// odstranit starou alookaci
		for (int i = 0; i < this->m; i++) {
			for (int j = 0; j < this->n; j++)
			{
				delete p[i][j];
				p[i][j] = NULL;
			}
			delete[] * p[i];
			p[i] = NULL;
		}
		delete[] * p;
		p = NULL;
	}

	// vytvorit novou alokaci
	this->m = m;
	this->n = n;
	p = new int** [this->m];
	for (int i = 0; i < this->n; i++)
	{
		p[i] = new int* [this->n];
		for (int j = 0; j < this->n; j++)
			p[i][j] = new int(0);
	}
}

int Pole2Duk_2::PocetRadku() const
{
	return m;
}

int Pole2Duk_2::PocetSloupcu() const
{
	return n;
}

void Pole2Duk_2::SetValue(int value, int m_pos, int n_pos)
{
	// {m_pos, n_pos}
	if ((m_pos >= 0 && n_pos >= 0) && (m_pos <= m && n_pos <= n))		// !!! kontrola pristupu k prvku na pozici
		*p[m_pos][n_pos] = value;
}

int Pole2Duk_2::GetValue(int m_pos, int n_pos) const
{
	// {m_pos, n_pos}
	if ((m_pos >= 0 && n_pos >= 0) && (m_pos <= m && n_pos <= n))		// !!! kontrola pristupu k prvku na pozici
		return *p[m_pos][n_pos];
	else
		return -1;
}

int** Pole2Duk_2::operator[](int index)
{
	if (index >= 0 && index < m)		// !!! kontrola existujiciho radku
		return p[index];
	else
		return NULL;
}

int Pole2Duk_2::IndexOf(int value, int* m_pos, int* n_pos) const
{
	// verze 1
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (*p[i][j] == value)
			{
				*m_pos = i;
				*n_pos = j;
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
	/*
		// ---
		// verze 3
		int* row;
		for (int i = 0; i < m; i++) {
			row = p[i]; // this[i];
			for (int j = 0; j < n; j++)
				if (row[j] == value)
				{
					*m_pos = i;
					*n_pos = j;
					return 1;
				}
		}
		*m_pos = -1;
		*n_pos = -1;
		return 0;
		*/
}

// --- todo DU
Pole2Duk_2* Pole2Duk_2::operator+(const Pole2Duk_2 m1)
{
	// todo du
	return NULL;
}

Pole2Duk_2* Pole2Duk_2::operator*(const Pole2Duk_2 m1)
{
	// todo - volitelne
	return NULL;
}

void Pole2Duk_2::realoc(int m_new, int n_new)
{
	// todo du
}

// --

/* static */ void Pole2Duk_2::tisk(const Pole2Duk_2& m)
{
	// todo
	for (int i = 0; i < m.m; i++)
	{
		for (int j = 0; j < m.n; j++)
			cout << m.GetValue(i, j) << ';';
		cout << '\n';
	}
}


