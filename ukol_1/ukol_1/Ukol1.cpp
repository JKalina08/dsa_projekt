// Ukol1.cpp : Tento soubor obsahuje funkci main. Prov�d�n� programu se tam zahajuje a ukon�uje.
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

// Spu�t�n� programu: Ctrl+F5 nebo nab�dka Ladit > Spustit bez lad�n�
// Lad�n� programu: F5 nebo nab�dka Ladit > Spustit lad�n�

// Tipy pro zah�jen� pr�ce:
//   1. K p�id�n� nebo spr�v� soubor� pou�ijte okno Pr�zkumn�k �e�en�.
//   2. Pro p�ipojen� ke spr�v� zdrojov�ho k�du pou�ijte okno Team Explorer.
//   3. K zobrazen� v�stupu sestaven� a dal��ch zpr�v pou�ijte okno V�stup.
//   4. K zobrazen� chyb pou�ijte okno Seznam chyb.
//   5. Pokud chcete vytvo�it nov� soubory k�du, p�ejd�te na Projekt > P�idat novou polo�ku. Pokud chcete p�idat do projektu existuj�c� soubory k�du, p�ejd�te na Projekt > P�idat existuj�c� polo�ku.
//   6. Pokud budete cht�t v budoucnu znovu otev��t tento projekt, p�ejd�te na Soubor > Otev��t > Projekt a vyberte p��slu�n� soubor .sln.
