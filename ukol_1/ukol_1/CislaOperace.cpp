#include "CislaOperace.h"
#include <iostream>


CislaOperace::CislaOperace() { }

CislaOperace::~CislaOperace() { }

// ---

float CislaOperace::cisloOpacne(float v)
{
	return v * -1.0F;  // k, 1
}

float CislaOperace::cisloAbsolutniHodnota_1(float v)
{ // 2, v >= 0; 3, v < 0
	float abs;

	if (v >= 0)
		abs = v;
	else
		abs = v * -1.0F;

	return abs;
}

float CislaOperace::cisloAbsolutniHodnota_2(float v)
{ // 2, v >= 0; 4, v < 0
	float abs = v;

	if (v < 0)
		abs *= -1.0;

	return abs;
}

float CislaOperace::urciMin_1(float a, float b, float c)
{
	// todo 1
	float m;
	if (a < b)
		if (a < c)
			m = a;
		else
			m = c;
	else
		if (b < c)
			m = b;
		else
			m = c;
	return m;
}

float CislaOperace::urciMin_2(float a, float b, float c)
{
	// todo 1
	float m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return m;
}

float CislaOperace::urciMax_1(float a, float b, float c)
{
	// todo 1
	float m;
	if (a > b)
		if (a > c)
			m = a;
		else
			m = c;
	else
		if (b > c)
			m = b;
		else
			m = c;
	return m;
}

float CislaOperace::urciMax_2(float a, float b, float c)
{
	// todo 1
	float m = a;
	if (m < b)
		m = b;
	if (m < c)
		m = c;
	return m;
}

void CislaOperace::urciMinMax_1(float a, float b, float c, float* min, float* max)
{ // ok: 3 + 3 + 3
  // not ok: 1 / 3, min is NULL / max is null
  // slozitost volani metody [+5]
	// todo 2
	if (min == NULL || max == NULL)
		return;
	// min C(3)
	if (a < b)
		if (a < c)
			*min = a;
		else
			*min = c;
	else
		if (b < c)
			*min = b;
		else
			*min = c;

	// max C(3)
	if (a > b)
		if (a > c)
			*max = a;
		else
			*max = c;
	else
		if (b < c)
			*max = b;
		else
			*max = c;
}

void CislaOperace::urciMinMax_2(float a, float b, float c, float* min, float* max)
{
	// not ok: 1 / 3
	// ok: 3 + 2*(3 [+5])
	// slozitost volani metody: 5
	// todo 2
	if (min == NULL || max == NULL)
		return;
	*min = urciMin_1(a, b, c);  // nebo // urciMin_2(a, b, c);
	*max = urciMax_1(a, b, c);  // nebo // urciMax_2(a, b, c);
}

bool CislaOperace::testPrvocislo_1(int v)
{
	bool jePrvocislo = true;
	for (int i = 2; i < v; i++)  // 1 + ((1 + (2) + 2)*(v-2) + k) + 1 = 2 + 5*(v-2) + k
		if (v % i == 0)
			jePrvocislo = false;
	return jePrvocislo;
}

bool CislaOperace::testPrvocislo_2(int v)
{
	for (int i = 2; i < v; i++)  // 1 + ((1 + (2))*m + 2*(m - 1) = 1 + 3*m + 2*m - 2 = 5*m-1, m < v
		if (v % i == 0)
			return false;
	return true;
}

int CislaOperace::faktorialR(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return n * faktorialR(n - 1);
}

void CislaOperace::swapInt(int& a, int& b)
{
	// todo - ukol cviceni
	;
}

// provede zamenu hodnot promennych danych ukazateli
void swapIntP(int* a, int* b)
{
	// todo - ukol cviceni
	;
}


// ----------------------------------------------------------------
// Domaci ukol:

int CislaOperace::faktorialNerek(int n)			// Volani metody +3 
{
	int x = 1;						// +1
	for (int i = 1; i <= n; i++) {	// +1; N; N-1;
		x *= i;						// N-1				

	}
	return x;
} // Celkem: 5+3N-2 = 3+3N (linearni)


int CislaOperace::mocninaR(int c, int m)			// Volani metody +3 
{
	if (m != 0) {					// (N-1)
		return (c * mocninaR(c, m - 1)); // (N-1)*3
	}
	else {
		return 1;					// +1
	}
} // Celkem: 3+N-1+3N-3+1 = 4N (linearni)


int CislaOperace::mocninaNerek(int c, int m)			// Volani metody +3 
{
	int result = 1;						// +1
	for (int i = 0; i < m; i++) {		// +1; N; N-1;
		result *= c;					// N-1

	}
	return result;
} // Celkem: 5+3N-2 = 3+3N (linearni)


int CislaOperace::zjistiPocetKladnych(int* hodnoty, int n)	// Volani metody +3 
{
	int pk = 0;									// +1
	for (int i = 0; i < n; i++) {				// +1; N; N-1;
		if (hodnoty[i] > 0) {					// N
			pk++;								// N-1
		}
	}
	return pk;
} // Celkem: 5+4N-2 = 3+4N (linearni)

int main()
{
	int a = 4, b = 5, c = 3;

	CislaOperace cislaOperace;

	int vypocet1 = cislaOperace.faktorialNerek(a);
	std::cout << vypocet1 << std::endl;

	int vypocet2 = cislaOperace.mocninaR(b, c);
	std::cout << vypocet2 << std::endl;

	int vypocet3 = cislaOperace.mocninaNerek(b, c);
	std::cout << vypocet3 << std::endl;

	int pole[6] = { -1, 0, 1, 2, -3, 7 };
	int vypocet4 = cislaOperace.zjistiPocetKladnych(pole, 6);
	std::cout << vypocet4 << std::endl;
}
