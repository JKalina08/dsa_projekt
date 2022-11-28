#pragma once
#include <exception>
#include <iostream>
using namespace std;

class Pole2D
{
private:
	int m, n;	// m ... pocet radku; n ... pocet sloupcu
	int* p;

public:
	Pole2D(int m, int n);
	virtual ~Pole2D();
	int PocetRadku() const;
	int PocetSloupcu() const;
	void SetValue(int value, int m_pos, int n_pos);
	int GetValue(int m_pos, int n_pos) const;
	int* operator[](int index);
	int IndexOf(int value, int* m_pos, int* n_pos) const;

	void init(int m, int n);
	Pole2D* operator+(const Pole2D m1);
	Pole2D* operator*(const Pole2D m1);
	void realoc(int m_new, int n_new);
	static void tisk(const Pole2D& m);

};

Pole2D::Pole2D(int m, int n)
{
	// init vektoru
	init(m, n);
	/*
	this->m = m;
	this->n = n;
	p = new int[this->m * this->n];
	*/
}

/* virtual */ Pole2D::~Pole2D()
{
	// dealokace
	delete[] p;
	p = NULL;
}

void Pole2D::init(int m, int n)
{
	// odstranit starou alookaci
	delete[] p;   // !!!
	// vytvorit novou alokaci
	this->m = m;
	this->n = n;
	p = new int[this->m * this->n];
}

int Pole2D::PocetRadku() const
{
	return m;
}

int Pole2D::PocetSloupcu() const
{
	return n;
}

void Pole2D::SetValue(int value, int m_pos, int n_pos)
{
	// {m_pos, n_pos} -> {index}
	if ((m_pos >= 0 && n_pos >= 0) && (m_pos < m && n_pos < n))		// !!! kontrola pristupu k prvku na pozici
		p[m_pos * n + n_pos] = value;
}

int Pole2D::GetValue(int m_pos, int n_pos) const
{
	// {m_pos, n_pos} -> {index}
	if ((m_pos >= 0 && n_pos >= 0) && (m_pos < m && n_pos < n))		// !!! kontrola pristupu k prvku na pozici
		return p[m_pos * n + n_pos];
	else
		return -1;
}

int* Pole2D::operator[](int index)
{
	if (index >= 0 && index < m)		// !!! kontrola existujiciho radku
		return p + index * this->n;
	else
		return NULL;
}

int Pole2D::IndexOf(int value, int* m_pos, int* n_pos) const
{
	// vyuziti transformace {r, s} -> {index}, {index} -> {r, s}

	// verze 1
	for (int i = 0; i < m * n; i++)
		if (p[i] == value)
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
Pole2D* Pole2D::operator+(const Pole2D m1)
{
	// todo du
	return NULL;
}

Pole2D* Pole2D::operator*(const Pole2D m1)
{
	// todo - volitelne
	return NULL;
}

void Pole2D::realoc(int m_new, int n_new)
{
	// todo du
}

// --

/* static */ void Pole2D::tisk(const Pole2D& m)
{
	// todo
	for (int i = 0; i < m.m; i++)
	{
		for (int j = 0; j < m.n; j++)
			cout << m.GetValue(i, j) << ';';
		cout << '\n';
	}
}

