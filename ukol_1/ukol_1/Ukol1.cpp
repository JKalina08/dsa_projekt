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
	int faktorialNerek(int n) // volani metody 3 +1{int n;} = 1 [+3] = 4 
	{
		int x = 1;
		for (int i = 1; i <= n; i++) {
			x *= i;

		}
		return x;
	}

	int mocninaR(int c, int m)
	{
		if (m != 0) {
			return (c * mocninaR(c, m - 1)); 
		}
		else {
			return 1;
		}
	}

	int mocninaNerek(int c, int m)
	{
		int result = 1;
		for (int i = 0; i < m; i++) {
			result *= c;

		}
		return result;
	}

	int zjistiPocetKladnych(int* hodnoty, int n)
	{
		int pk = 0;
		for (int i = 0; i < n; i++) {
			if (hodnoty[i] > 0) {
				pk++;
			}
		}
		return pk;
	}
};

int main()
{
	CislaOperace fakNer; // Crate an object of my class
	int vypocet1 = fakNer.faktorialNerek(4);
	cout << vypocet1 << endl;

	CislaOperace mocR;
	int vypocet2 = mocR.mocninaR(5, 3);
	cout << vypocet2 << endl;

	CislaOperace mocNer;
	int vypocet3 = mocNer.mocninaNerek(5, 3);
	cout << vypocet3 << endl;

	CislaOperace zpKlad;
	int pole[6] = { -1, 0, 1, 2, -3, 7 };
	int vypocet4 = zpKlad.zjistiPocetKladnych(pole, 6);
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
