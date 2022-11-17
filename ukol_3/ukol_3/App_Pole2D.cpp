// App_Pole2D.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
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
	Pole2Duk* pole = new Pole2Duk(3, 3); // pole(4, 3);
	const int MY_MAX = 100;		// RAND_MAX

	srand(time(NULL));

	// init
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			pole->SetValue(rand() % (MY_MAX + 1), i, j);   // <0; 100>  //pole.SetValue(i * 4 + j, i, j);

	Pole2Duk::tisk(*pole);
	cout << '\n';
	//test ziskani hodnoty z pozice
	int value = pole->GetValue(2, 2);
	cout << "Prvek na pozici 3,3: " << value << '\n' << '\n';

	//test ulozeni hodnoty na pozici
	cout << "Prvek na 666 do pozice 1,3: " << '\n' << '\n';
	pole->SetValue(666, 0, 2);
	Pole2Duk::tisk(*pole);

	//test IndexOf
	int x, y;
	pole->IndexOf(value, &x, &y);
	cout << "Indexy prvku " << value <<" [2, 2]: " << x+1 << ", " << y+1 << '\n' << '\n';

	//test na operatory
	Pole2Duk* newpole = new Pole2Duk(pole->PocetRadku(), pole->PocetSloupcu());
	// init
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			newpole->SetValue(rand() % (MY_MAX + 1), i, j);
	
	cout << "Testovani operatoru: ===============" << endl;
	cout << '\n' << "Nove vytvorene pole:" << '\n';
	Pole2Duk::tisk(*newpole);
	cout << '\n';

	cout << '\n' << "stare pole:" << '\n';
	Pole2Duk::tisk(*pole);
	cout << '\n';


	//test na scitani
	cout << '\n' << "Soucet poli:" << '\n';
	//Pole2Duk* oppole;// = new Pole2Duk(pole->PocetRadku(), pole->PocetSloupcu());
	Pole2Duk* oppole = *pole + *newpole;
	//*pole + *newpole;
	Pole2Duk::tisk(*oppole);
	cout << '\n';

	cout << '\n' << "Nove vytvorenme pole:" << '\n';
	//Pole2Duk::tisk(*newpole);
	cout << '\n';

	cout << '\n' << "stare pole:" << '\n';
	Pole2Duk::tisk(*pole);
	cout << '\n';




	//test na nasobeni
	//cout << '\n' << "Soucin poli:" << '\n';
	//oppole = *pole * *newpole;
	//Pole2Duk::tisk(*oppole);
	//cout << '\n';


	delete pole;
	//delete oppole;
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
	Pole2Duk_2 *pole_uk = new Pole2Duk_2(3, 4);
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
	return 0;

}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
