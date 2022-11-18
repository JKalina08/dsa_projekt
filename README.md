## DSA Úkoly a závěrečný projekt

### Úkol č.1
- [x] Operace s čísly `CislaOperace.cpp`
- [ ] Odevzdejte soubory
### Úkol č.2
__1.__ V modulu `SeznamInt_1` (projektu App_Pole1D)  
- [x] __(a)__ Doplňte implementaci metody `.Copy`, která má za úkol vytvořit kopii pole hodnot a vrátit vytvořenou kopii návratovou hodnotou. Otestujte metody na klíčových případech.
- [x] __(b)__ Metoda `.Add` nyní kontroluje zaplnění pole a neumožní vložit další hodnotu, pokud je pole naplněné. Doplňte definici metody realokace pro realokaci pole. Upravte (Rozšiřte) metodu `.Add` tak, aby při naplněném poli a pokusu 
o vložení další hodnoty se stávající pole realokovalo.

 - [x] Otestujte metody na klíčových případech, v `App_Pole1D.cpp`.
 - [ ] Odevzdejte soubory projektu: `SeznamInt_1.cpp`, `SeznamInt_1.h`, `App_Pole1D.cpp`. 

__2.__ V modulu `SeznamInt_2` (projektu `App_Pole1D`)
Upravte třídu `SeznamInt_2` tak, aby pracovala s pole ukazatelů na hodnotu. 
Rozhraní objektu zůstate nezměněné - předává se hodnota, ale ta se zapíše do dynamicky 
alokovaného místa. Hodnota `NULL` prvku bude znamenat, že na dané pozici není hodnota zapsána.  

- [x] Co se musí provést při odstranění hodnoty? Proveďte. 

- [x] Otestujte funkčnost třídy, v `App_Pole1D.cpp`. Odevzdejte soubory projektu 
`SeznamInt_2.h`, `SeznamInt_2.cpp`, sdílený soubor `App_Pole1D.cpp` s předcházejícím úkolem. 


#### Požadavek na odevzdání:
- [ ] soubory `SeznamInt_1.cpp, SeznamInt_1.h, SeznamInt_2.h, SeznamInt_2.cpp, App_Pole1D.cpp`
- [ ] zkomprimovano do `ukol2.zip` (tak aby po dekomprimaci byly v zadaném umístění tyto soubory 
a nikoliv složka s těmito soubory).
### Úkol č.3
V modulu `Pole2Duk` projektu `App_Pole2D`
- [ ] a) Doplňte definice metod přetížení operátoru + (sčítání matic) a operátoru * (násobení matic), dále přidejte metodu operátoru == (porovnání matic). Funkčnost ověřte v hlavním programu. 
    - :warning: Zatím nevíme jak na operatory .. `bool`
- [ ] b) Doplňte definici metody realokace matice vzhledem k její realizaci v Pole2Duk. Funkčnost ověřte v hlavním programu. 

#### Požadavky na odevzdání: 
- [ ] soubory `Pole2Duk.h`, `App_Pole2D.cpp`
- [ ] zkomprimováno do `zip` jako `ukol3.zip` (tak aby po dekomprimaci byly v cílové složce umístěny soubory a nikoliv složka se soubory).

### Úkol č.4
