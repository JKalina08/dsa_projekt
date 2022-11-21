## DSA Úkoly a závěrečný projekt

### Úkol č.1
- [x] Operace s čísly `CislaOperace.cpp`
- [x] Odevzdejte soubory (Neděle, 20. listopad 2022, 20.18 ..Zbývá 15 hodin 40 min.) :ok:
### Úkol č.2
__1.__ V modulu `SeznamInt_1` (projektu App_Pole1D)  
- [x] __(a)__ Doplňte implementaci metody `.Copy`, která má za úkol vytvořit kopii pole hodnot a vrátit vytvořenou kopii návratovou hodnotou. Otestujte metody na klíčových případech.
- [x] __(b)__ Metoda `.Add` nyní kontroluje zaplnění pole a neumožní vložit další hodnotu, pokud je pole naplněné. Doplňte definici metody realokace pro realokaci pole. Upravte (Rozšiřte) metodu `.Add` tak, aby při naplněném poli a pokusu 
o vložení další hodnoty se stávající pole realokovalo.

 - [x] Otestujte metody na klíčových případech, v `App_Pole1D.cpp`.
 - [x] Odevzdejte soubory projektu: `SeznamInt_1.cpp`, `SeznamInt_1.h`, `App_Pole1D.cpp`. (Neděle, 20. listopad 2022, 20.18 ..Zbývá 15 hodin 40 min.) :ok:

__2.__ V modulu `SeznamInt_2` (projektu `App_Pole1D`)
Upravte třídu `SeznamInt_2` tak, aby pracovala s pole ukazatelů na hodnotu. 
Rozhraní objektu zůstate nezměněné - předává se hodnota, ale ta se zapíše do dynamicky 
alokovaného místa. Hodnota `NULL` prvku bude znamenat, že na dané pozici není hodnota zapsána.  

- [x] Co se musí provést při odstranění hodnoty? Proveďte. 

- [x] Otestujte funkčnost třídy, v `App_Pole1D.cpp`. Odevzdejte soubory projektu 
`SeznamInt_2.h`, `SeznamInt_2.cpp`, sdílený soubor `App_Pole1D.cpp` s předcházejícím úkolem. 


#### Požadavek na odevzdání:
- [x] soubory `SeznamInt_1.cpp, SeznamInt_1.h, SeznamInt_2.h, SeznamInt_2.cpp, App_Pole1D.cpp`
- [x] zkomprimovano do `ukol2.zip` (tak aby po dekomprimaci byly v zadaném umístění tyto soubory 
a nikoliv složka s těmito soubory).
- [x] Odevzdáno (Neděle, 20. listopad 2022, 20.19 ..Zbývá 15 hodin 41 min.) :ok:

### Úkol č.3
V modulu `Pole2Duk` projektu `App_Pole2D`
- [x] a) Doplňte definice metod přetížení operátoru + (sčítání matic) a operátoru * (násobení matic), dále přidejte metodu operátoru == (porovnání matic). Funkčnost ověřte v hlavním programu. 
- [x] b) Doplňte definici metody realokace matice vzhledem k její realizaci v Pole2Duk. Funkčnost ověřte v hlavním programu. 

#### Požadavky na odevzdání: 
- [x] soubory `Pole2Duk.h`, `App_Pole2D.cpp`
- [x] zkomprimováno do `zip` jako `ukol3.zip` (tak aby po dekomprimaci byly v cílové složce umístěny soubory a nikoliv složka se soubory).
- [x] Odevzdáno (Neděle, 20. listopad 2022, 20.19 ..Zbývá 15 hodin 40 min.) :ok:

### Úkol č.4
V modulu `LinekdList.cpp` (projektu DDS_LinkedList-reseni-1.zip), doplňte implementaci metod operací jednocestného spojovaného seznamu (todo1 du, todo2 du, todo3 du, todo4 du, todo5 du). 
(!!) V implementacích úkolu todo4 du a todo5 du provádějte přepojení prvků seznamu, není povoleno kopírovat hodnoty prvků mezi prvky. Implementace metod ověřte použitím ve funkci Main.

Požadavky na odevzdání:
- [ ] soubor `LinkedList.cpp` a soubor DDS_LinkedList.cpp zkomprimované do archviu `task4.zip`

## Závěrečný projekt
Nákupní paragon s uspořádáním položek podle kategorie. Průběžné vytvářen paragonu vkládáním
nové položky. (+ Kontrola nákupu povoleného množství. Viz.:
[Moodle](https://moodle.vspj.cz/pluginfile.php/223973/mod_resource/content/2/2021-2022_SemestralniPrace.pdf)
