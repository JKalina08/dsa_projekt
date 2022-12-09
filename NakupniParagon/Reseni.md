<div style="text-align:center"><h1>Vysoká škola polytechnická Jihlava <img height="40" src="../imgs/vspjLogo.png" /></div>


<div style="text-align:center"><h3>Team: T22_sp</h3> </div>

#### Autorský team:
- Jiří Bukovský, bukovs05@student.vspj.cz
- Jiří Kalina, kalina08@student.vspj.cz
- Jiří Karmasin, karmasin@student.vspj.cz
- Michal Makovec, makovec@student.vspj.cz

## Formulace zadání
Cílem zadání je sestavení konzolové aplikace pro práci s nákupním lístkem tzv. paragonem. Hlavní funkcionalita má být uspořádávání položek podle kategorie, Dále pak vkládání a odebírání položek a kontrola nákupu povoleného množství. 

V našem případě se bude jednat o nákupní paragon supermarketu s potravinami. U každé položky nákupního lístku je předem známa její kategorie a počet kategorií je taktéž předem známy a neměnný.

Kategorie:
- Alkohol
- Drogerie
- Maso
- Nápoje
- Ovoce
- Potraviny
- Zelenina
> Celkem 7 kategorií produktů


## Návrh zvoleného řešení 
Hlavní uspořádání v nákupním paragonu bude tedy po kategoriích. Vzhledem k tomu, že kategorie budou neměnné, volíme za tímto účelem datovou strukturu pole ukazatelů o velikosti sedmi prvků. Každá položka pole bude ukazatelem na datovou strukturu obousměrný spojový seznam, který bude sloužit jako datová struktura pro uchování nákupních položek v jednotlivých kategoriích.

### Schéma řešení
![schemaReseni](../imgs/model.png)

- - -

### Třída `Paragon`
Obsahuje pole sedmi ukazatelů v předem stanoveném stanoveném pořadí definovaném obchodním domem. Každý jednotlivý index pole `Produkt* arrKategorie[7];` je ukazatelem na začátek budoucího spojového seznamu pro jednotlivé kategorie produktů.
```cpp
// Pole ukazatelů
Produkt* arrKategorie[7]; 
// Pole názvů dle indexu pole ukazatelů
const char *Kategorie[] = { "Alkohol", "Drogerie", "Maso", "Napoje", "Ovoce", "Potraviny", "Zelenina"};

// - - - - - - - - - - - - 

class Paragon
{
private:
    float sumCena;
    Produkt* arrKategorie[7];
public:
    Paragon() { // konstruktor
        for (int i = 0; i < 7; i++) {
            arrKategorie[i] = nullptr;
        }
        sumCena = 0.0;
    } 
    friend class Produkt;
    ~Paragon() {
        ;
    }
}
```

### Metody třídy `Paragon`
+ addProdukt()
    - přidá produkt do příslušné kategorie
+ remProdukt()
    - odebere produkt z příslušné kategorie
+ sortKatgByAtrAsc()
    - seřadí produkty podle celkové ceny uvnitř každé kategorie sestupně
+ sortKatgByAtrDesc()
    - seřadí produkty podle celkové uvnitř každé kategorie vzestupně
+ getSumCenaKat()
    - suma ceny za produkty v jednotlivé kategorii (projde spojový seznam)
+ getSumCena()
    - suma ceny za jednotlivé kategorie 1 až 7 (resp. indexy pole 0 až 6)
+ printParagon()
    - vytiskne do konzole položky na paragonu dle kategorií


## Třída `Produkt`
Produkt je každá jednotlivá položka zakoupeného zboží, jež může být přidána do příslušné kategorie nákupního paragonu.
```cpp
class Produkt
{
private:
    std::string Nazev;
    float jendCena;
    float Mnozstvi;
    int katgIdx; // 0-6 index pole
    Produkt* pNext;
    Produkt* pPrev;
public:
    Produkt(std::string name, float price, float count, int idx) {
        Nazev = name;
        Mnozstvi = count;
        katgIdx = idx;
        jendCena = price;
        pNext = nullptr;
        pPrev = nullptr;
    }
    ~Produkt() { };
    // . . .
}
```
 
### Metody třídy `Produkt`
+ getName()
    - zjistí název produktu
+ setCount()
    - nastaví množství zakoupeného produktu
+ getCount()
    - zjistí množství produktu
+ getNext()
    - vrací ukazatel na další položku spojového seznamu
+ setNext()
    - nastavuje ukazatel na další položku spojového seznamu
+ getPrev()
    - vrací ukazatel na předchozí položku spojového seznamu
+ setPrev()
    - nastavuje ukazatel na předchozí položku spojového seznamu
+ getPrice()
    - zjistí celkovou cenu položky spojového seznamu (jednotkováCena * množství)
+ getJednPrice()
    - zjistí jednotkovou cenu položky spojového seznamu
+ setPrice()
    - nastaví jednotkovou cenu položky spojového seznamu

## Logická interpretace
Pro každý jednotlivý nákup je vytvořena instance nákupního paragonu, který je nejprve prázdý. Nákupem, neboli postupným přidáváním položek (produktů) se začne plnit. U každého produktu je vždy znám jeho název, kategorie, jednotková cena a zakoupené množství.  

Každý zakoupený produkt se zařadí do příslušné kategorie na konec spojového seznamu. V případě, že přidáme produk, který na nákupním paragonu jiý existuje, přičte se množství k stávajícímu uzlu (tím se upraví i jeho cena). V případě, že chceme produk odebrat, odebíráme jeho množství a pokud toto klesne na 0, odstraní se příslušný produkt ze spojového seznamu.  

Na konci nákupu vyjede účtenka seřazená dle 7-mi kategorii a v každé gategorie je seznam zakoupených položek se všemi dostupnými údaji. Položky v kategoriích jsou seřazeny vzestupně nebo setupně dle ceny.


## Fyzická interpretace
Základní rozdělení do jednotlivých kategorií je implementováno pomocí pole`Produkt* arrKategorie[7];`, které obsahuje ukazatele na budoucí spojové seznamy produktů v kategorii.

#### Přídání produktu do kategorie
se uskuteňuje metodou:
```cpp
void addProdukt(std::string name, float price, float count, int idx) {...}
```
- `name` je název produktu např. "Rohlík"
- `price` je jednotková cena produktu např. "3.60"
- `count` je počet produktů např. "10", které chceme přidat
    - v případě produktů počítaných na kusy se jedná o celé číslo = počet kusů
    - v případě produktů počítaných na hmotnost se jedná o destiné číslo = hmotnost v dkg
-

### Odůvodnění volby datové struktury a navrhovaných algoritmů
Pro celkové řešení byla zvolena kombinace dvou datových struktur. V případě kategorií bylo zvoleno pole s předem definovanou velikostí. Víme, že kategorie produktů se neboudou často měnit a tím docílíme z hlediska časové složitosti ke konstantního přístupu ke kategoriím 1 - 7.  

Pro jednotlivé produkty jsme zvolili obousměrný spojový seznam. Ten se jeví jako nejefektivnější struktura pro ukládání produktů. V našem případě totiž nevíme kolik produktů a jaké kategorie bude jednotlivý nákupní paragon obsahovat.  

Spojový seznam nám tedy umožní přidávat do každé kategorie libovolné množství produktů, aniž bychom museli předem definovat jeho velikost. Vkládání produktu bude vždy na konec seznamu. Volíme obousměrný spojový seznam, protože předpokládáme časté odebírání produktů a teké implementaci řadících algorytmů. Obousměrný spojový seznam je praktičtějčí pro výše uvedené operace. Obousměrný seznam sice zabere více paměti ale v připadě nákupního paragonu, kde se většinou jedná o desítky položek, je to zanedbatelné.
### Vyjádření složitosti

### Diskuze nad složitostí, výhodami a nevýhodami zvolených postupů