// App_Pole2D.cpp : Tento soubor obsahuje funkci main. Provádìní programu se tam zahajuje a ukonèuje.
//

#include <iostream>
#include "Pole2D.h"
#include "Pole2Duk.h"
#include "Pole2D_2.h"
#include "Pole2Duk_2.h"


void ukazka1()
{
	Pole2D pole(4, 3);
	const int MY_MAX = 100;		// RAND_MAX

	srand(time(NULL));

	// init
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			pole.SetValue(rand() % (MY_MAX + 1), i, j);   // <0; 100>  //pole.SetValue(i * 4 + j, i, j);

	Pole2D::tisk(pole);
	//cout << '\n';

	// index of
	int r, s;
	int result;
	result = pole.IndexOf(5, &r, &s);
	cout << result << '\t' << "5 -> " << '[' << r << ';' << s << ']' << endl;

	// ---

	int* row = pole[1];
	int value = row[0];
	int value2 = row[4]; // !!! [2, 0]
	int value3 = row[8]; // !!! [3, 0]
	//int value4 = row[12]; // !!! [4???, 0]
	//row[12] = 100000;
}

void ukazka2()
{
	Pole2Duk* pole = new Pole2Duk(4, 4); // pole(3, 3);
	Pole2Duk* newpole = new Pole2Duk(pole->PocetRadku(), pole->PocetSloupcu());
	const int MY_MAX = 10;		// RAND_MAX

	srand(time(NULL));

	// init
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			newpole->SetValue(rand() % (MY_MAX + 1), i, j);
			pole->SetValue(rand() % (MY_MAX + 1), i, j);   // <0; 100>  //pole.SetValue(i * 4 + j, i, j);
		}

	Pole2Duk::tisk(*pole);
	cout << endl;


	//test ziskani hodnoty z pozice
	int value = pole->GetValue(2, 2);
	cout << "Prvek na pozici 3,3: " << value << '\n' << '\n';

	//test ulozeni hodnoty na pozici
	cout << "Prvek na 666 ulozim do pozice 1,3: " << '\n' << '\n';
	pole->SetValue(666, 0, 2);
	Pole2Duk::tisk(*pole);

	//test IndexOf
	int x, y;
	pole->IndexOf(value, &x, &y);
	cout << "Indexy prvku " << value << " [3, 3]: " << x + 1 << ", " << y + 1 << '\n' << '\n';

	//test na operatory
	cout << "Testovani operatoru: ===============" << endl;
	cout << endl << "Stare pole:" << endl;

	Pole2Duk::tisk(*pole);
	cout << endl;

	cout << '\n' << "Nove vytvorene pole:" << endl;
	Pole2Duk::tisk(*newpole);
	cout << endl;


	//test na scitani
	cout << endl << "Soucet poli:" << endl;
	Pole2Duk* oppole = *pole + *newpole;
	Pole2Duk::tisk(*oppole);
	cout << endl;

	//test na nasobeni
	cout << endl << "Soucin poli:" << endl;
	Pole2Duk* oppole2 = *pole * (*oppole);
	Pole2Duk::tisk(*oppole2);
	cout << endl;

	//test na porovnani ==
	cout << endl << "Porovnani stejnych poli:" << endl;
	bool isSame = pole == pole;

	if (isSame)
		cout << "Pole jsou stejna" << endl;
	else
		cout << "Pole jsou rozdilna" << endl;
	cout << endl;

	//test na porovnani !=
	cout << endl << "Porovnani rozdilnych poli:" << endl;
	isSame = pole == newpole;

	if (isSame)
		cout << "Pole jsou stejna" << endl;
	else
		cout << "Pole jsou rozdilna" << endl;
	cout << endl;

	//realokace
	cout << "Realokace Pole na 6x6\n";
	pole->realoc(6, 6);
	Pole2Duk::tisk(*pole);


	delete pole;
	delete oppole;
	delete oppole2;
	delete newpole;
}

void ukazka3()
{
	Pole2D_2 pole(3, 4);
	const int MY_MAX = 100;		// RAND_MAX

	srand(time(NULL));

	// init
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			pole.SetValue(rand() % (MY_MAX + 1), i, j);   // <0; 100>  //pole.SetValue(i * 4 + j, i, j);

	// tisk
	Pole2D_2::tisk(pole);

	// index of
	int r, s;
	int result;
	result = pole.IndexOf(5, &r, &s);
	cout << result << '\t' << "5 -> " << '[' << r << ';' << s << ']' << endl;

	// ---

	int* row = pole[1];
	int value = row[0];
	int value2 = row[4]; // !!!
	int value3 = row[8]; // !!!
	//int value4 = row[12]; // !!!
	//row[12] = 100000;
}

void ukazka4()
{
	Pole2Duk_2* pole_uk = new Pole2Duk_2(3, 4);
	const int MY_MAX = 100;		// RAND_MAX

	srand(time(NULL));

	// init
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			pole_uk->SetValue(rand() % (MY_MAX + 1), i, j);   // <0; 100>  //pole.SetValue(i * 4 + j, i, j);

	// tisk
	Pole2Duk_2::tisk(*pole_uk);

	// index of
	int r, s;
	int result;
	result = pole_uk->IndexOf(5, &r, &s);
	cout << result << '\t' << "5 -> " << '[' << r << ';' << s << ']' << endl;

	// ---

	int** row = (*pole_uk)[1];
	int* value = row[0];
	int* value2 = row[4]; // !!!
	int* value3 = row[8]; // !!!
	//int value4 = row[12]; // !!!
	//row[12] = 100000;

	delete pole_uk;
}

int main()
{
	ukazka2();
	//Pole2Duk* pole = new Pole2Duk(4, 4); // pole(4, 3);
	//Pole2Duk* pole2 = new Pole2Duk(4, 4);

	//const int MY_MAX = 100;		// RAND_MAX

	//srand(time(NULL));

	//// init
	//for (int i = 0; i < 4; i++)
	//	for (int j = 0; j < 4; j++)
	//	{
	//		pole->SetValue(rand() % (MY_MAX + 1), i, j);
	//		pole2->SetValue(rand() % (MY_MAX + 1), i, j);
	//	}


	//cout << "Pole\n";
	//Pole2Duk::tisk(*pole);
	//cout << endl;

	//cout << "Pole 2\n";
	//Pole2Duk::tisk(*pole2);
	//cout << endl;

	//cout << "Soucet\n";
	//Pole2Duk* pole3 = *pole + *pole2;
	//Pole2Duk::tisk(*pole3);
	//cout << endl;

	//cout << "Nasobeni Pole * pole souctu\n";
	//Pole2Duk* pole4 = *pole * (*pole3);
	//Pole2Duk::tisk(*pole4);
	//cout << endl;

	//cout << "Porovnaní Pole a pole souctu\n";
	//bool jeStejne = pole == pole3;

	//if (jeStejne)
	//	cout << "Stejne" << endl;
	//else
	//	cout << "Rozdilne" << endl;

	//cout << endl;

	//cout << "Realokace Pole na 3x3\n";
	//pole->realoc(10, 10);
	//Pole2Duk::tisk(*pole);


	return 0;
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
