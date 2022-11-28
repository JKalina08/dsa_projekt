#pragma once
#pragma once
class CislaOperace
{
public:
	CislaOperace();
	~CislaOperace();

	// urci opacne cislo k cislu predaneho parametrem, vysledek vrati navratovou hodnotou
	float cisloOpacne(float v);

	// urci absolutni hodntu cisla predaneho parametrem, vysledek vrati navratovou hodnotou
	float cisloAbsolutniHodnota_1(float v);
	float cisloAbsolutniHodnota_2(float v);

	// urci nejmensi hodnotu z cisel
	float urciMin_1(float a, float b, float c);
	float urciMin_2(float a, float b, float c);

	// urci nejvetsi hodnotu z cisel
	float urciMax_1(float a, float b, float c);
	float urciMax_2(float a, float b, float c);

	// urci nejvetsi a nejmensi hodnotu ze tri cisel
	void urciMinMax_1(float a, float b, float c, float* min, float* max);
	void urciMinMax_2(float a, float b, float c, float* min, float* max);

	// otestuje, jestli je hodnota predana promennou v prvocislem
	bool testPrvocislo_1(int v);
	bool testPrvocislo_2(int v);

	// spocita faktorial cisla (rekurzivni metodou) 
	int faktorialR(int n);

	// provede zamenu hodnot promennych
	void swapInt(int& a, int& b);

	// provede zamenu hodnot promennych danych ukazateli
	void swapIntP(int* a, int* b);

	// spocita faktorial cisla (nerekurzivni metodou) 
	int faktorialNerek(int n);

	// spocita mocninu cisla (rekurzinivni metodou)
	int mocninaR(int c, int m);

	// spocita mocninu cisla (nerekurzivni metodou)
	int mocninaNerek(int c, int m);

	// zjisti pocet kladnych cisel v poli hodnoty o velikosti n
	int zjistiPocetKladnych(int* hodnoty, int n);
};


