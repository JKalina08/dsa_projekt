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
	//std::cout << pivot<<std::endl;

	if (p[pivot] == value)
		return pivot; // printf("Find-order-interpolation %d\n", pivot);
	else {
		if (value < p[pivot]) {
			//std::cout << "1" << std::endl;
			while (value < p[pivot])
				pivot--;
			if (p[pivot] == value)
				return pivot;
			else
				return -1;
		}
		else {
			//std::cout << "2" << std::endl;
			while (value > p[pivot])
				pivot++;
			if (p[pivot] == value)
				return pivot;
			else
				return -1;
		}
	}
}

int main()
{
	int p[] = { 5, 2, 4, 1, 3 };
	int p2[] = { 3, 5, 10, 15, 26 };
	char p3[] = { 'B', 'C', 'F', 'G', 'I', 'J', 'K', 'L', 'O', 'P', 'Q', 'R', 'Z' };
	
	std::cout << "B  C  F  G  I  J  K  L  O  P  Q  R  Z" << std::endl;
	int fInterp = Find_interpolation(p3, 0, 12, 'A', 'Z', 'G');
	std::cout << "G -> " << fInterp << std::endl;

	fInterp = Find_interpolation(p3, 0, 12, 'A', 'Z', 'C');
	std::cout << "C -> " << fInterp << std::endl;

	fInterp = Find_interpolation(p3, 0, 12, 'A', 'Z', 'H');
	std::cout << "H -> " << fInterp << std::endl;

	fInterp = Find_interpolation(p3, 0, 12, 'A', 'Z', 'Y');
	std::cout << "Y -> " << fInterp << std::endl;

	fInterp = Find_interpolation(p3, 0, 12, 'A', 'Z', 'Z');
	std::cout << "Z -> " << fInterp << std::endl;

	fInterp = Find_interpolation(p3, 0, 12, 'A', 'Z', 'B');
	std::cout << "B -> " << fInterp << std::endl;

	fInterp = Find_interpolation(p3, 3, 12, 'F', 'L', 'I');
	std::cout << "I -> " << fInterp << std::endl;

	return 0;
}
