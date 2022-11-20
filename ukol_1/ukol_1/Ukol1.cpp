// Ukol1.cpp : Tento soubor obsahuje funkci main. Provádìní programu se tam zahajuje a ukonèuje.
//
#include <iostream>
using namespace std;

// ----------------------------------------------------------------
// Domaci ukol:
// TODO: Dodelat v komentarich u vsech funkci "Casovou Slozitost"

class CislaOperace
{
public:
	int faktorialNerek(int n)			// Volani metody +3 
	{
		int x = 1;						// +1
		for (int i = 1; i <= n; i++) {	// +1; N; N-1;
			x *= i;						// N-1				

		}
		return x;						
	} // Celkem: 5+3N-2 = 3+3N (linearni)


	int mocninaR(int c, int m)			// Volani metody +3 
	{
		if (m != 0) {					// (N-1)
			return (c * mocninaR(c, m - 1)); // (N-1)*3
		}
		else {
			return 1;					// +1
		}
	} // Celkem: 3+N-1+3N-3+1 = 4N (linearni)


	int mocninaNerek(int c, int m)			// Volani metody +3 
	{ 
		int result = 1;						// +1
		for (int i = 0; i < m; i++) {		// +1; N; N-1;
			result *= c;					// N-1

		}
		return result;
	} // Celkem: 5+3N-2 = 3+3N (linearni)


	int zjistiPocetKladnych(int* hodnoty, int n)	// Volani metody +3 
	{
		int pk = 0;									// +1
		for (int i = 0; i < n; i++) {				// +1; N; N-1;
			if (hodnoty[i] > 0) {					// N
				pk++;								// N-1
			}
		}
		return pk;
	} // Celkem: 5+4N-2 = 3+4N (linearni)
};

int main()
{
	float a, b, c;
	a = 4;
	b = 5;
	c = 3;
	CislaOperace cislaOperace;

	int vypocet1 = cislaOperace.faktorialNerek(a);
	cout << vypocet1 << endl;

	int vypocet2 = cislaOperace.mocninaR(b, c);
	cout << vypocet2 << endl;

	int vypocet3 = cislaOperace.mocninaNerek(b, c);
	cout << vypocet3 << endl;

	int pole[6] = { -1, 0, 1, 2, -3, 7 };
	int vypocet4 = cislaOperace.zjistiPocetKladnych(pole, 6);
	cout << vypocet4 << endl;

}

// Spuštìní programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladìní
// Ladìní programu: F5 nebo nabídka Ladit > Spustit ladìní

// Tipy pro zahájení práce:
//   1. K pøidání nebo správì souborù použijte okno Prùzkumník øešení.
//   2. Pro pøipojení ke správì zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvoøit nové soubory kódu, pøejdìte na Projekt > Pøidat novou položku. Pokud chcete pøidat do projektu existující soubory kódu, pøejdìte na Projekt > Pøidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevøít tento projekt, pøejdìte na Soubor > Otevøít > Projekt a vyberte pøíslušný soubor .sln.
