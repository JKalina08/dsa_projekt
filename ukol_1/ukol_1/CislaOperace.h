#pragma once
class CislaOperace
{
public:
	CislaOperace();
	~CislaOperace();

	// spocita faktorial cisla (nerekurzivni metodou) 
	int faktorialNerek(int n);

	// spocita mocninu cisla (rekurzinivni metodou)
	int mocninaR(int c, int m);

	// spocita mocninu cisla (nerekurzivni metodou)
	int mocninaNerek(int c, int m);

	// zjisti pocet kladnych cisel v poli hodnoty o velikosti n
	int zjistiPocetKladnych(int* hodnoty, int n);
};
