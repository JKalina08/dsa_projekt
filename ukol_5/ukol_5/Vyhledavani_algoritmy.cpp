// Vyhledavani_algoritmy.cpp : Defines the entry point for the console application.
//

#include <iostream>


/*
 * Find_interpolation : interpolacni vyhledavani
 * Params:
 *	p - pole hodnot
 *	l - dolni mez intervalu hledani
 *	r - horni mez intervalu hledani
 *	x0 - dolni mez hledane hodnoty
 *	x1 - horni mez hledane hodnoty
 *	value - hledana hodnota
 */
int Find_interpolation(char p[], int l, int r, char x0, char x1, char value)
{
	if (l > r)
		return -1;

	int pivot = l + (value - x0) * (r - l) / (x1 - x0);

	if (p[pivot] == value)
		return pivot; // printf("Find-order-interpolation %d\n", pivot);
	else
		return 99;// dohledat sekvencne vlevo nebo vpravo
}

int main()
{
	int p[] = { 5, 2, 4, 1, 3 };
	int p2[] = { 3, 5, 10, 15, 26 };
	char p3[] = { 'B', 'C', 'F', 'G', 'I', 'J', 'K', 'L', 'O', 'P', 'Q', 'R', 'Z' };

	int fInterp = Find_interpolation(p3, 3, 12, 'F', 'L', 'I');
	std::cout << fInterp << std::endl;


	return 0;
}
