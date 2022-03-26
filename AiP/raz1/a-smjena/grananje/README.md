## Ukratko
Grananje je nacin na koji nas program moze "razmisljati". Ono nam omogucuje odlucivati u programu, ovisno o njegovom trenutnom stanju.
Mozemo mijenjati ispis programa ovisno o upisaninm vrijednostima.<br>
Postoje dvije vrste komandi za grananje, a to su `if` i `switch case`, no koncept je uvijek isti.
Komanda za grananje ce izvrsiti dani kod samo ako je uvijet istinit.

Pod `if` spadaju komande `if`, `else if` i `else`.<br>
`if` i `else if` primaju neki uvijet koji ce provjeriti prije izvrsavanja koda<br>
`if` je standardan uvijet, `else if` su uvijeti koji se provjeravaju ako uvijet prije njih nije uspio, dok `else` izvrsi kod samo ako svi slucaji prije njega nisu uspjeli.
Nema ogranicenja broju `else if` uvijeta, pa je moguce na jedan `if` imati bezbroj `else if` uvijeta. `else` moze biti samo jedan.

`switch case` radi na principu da mu se zada neka vrijednost (najcesce varijabla) i onda se u tzv. slucajevima provjerava jednakost.<br>
Mana `switch case` je to sto moze provjeravati samo jednakost (operator `==`).<br>
*(switch case je u praksi vrlo rijetko koristen jer moze provjeravati samo jednakost)*

## Pisanje
```c
if (uvijet) {
  // kod
}

if (uvijet) {
  // kod
} else {
  // drugi kod
}

if (uvijet) {
  // kod
} else if (uvijet) {
  // drugi kod
} else {
  // treci kod
}

switch (test_vrijednost) {
  case prva_vrijednost:
    // kod
    break;
  case druga_vrijednost:
    // drugi kod
    break;
  default:
    // default kod
}
 
```

## Operatori
| OPERATOR |      IME      |                                SLUCAJ ISTINITOSTI                                |
|:--------:|:-------------:|----------------------------------------------------------------------------------|
|    ==    |    jednako    | istinito ako su vrijednosti jednake                                              |
|    !=    |   razlicito   | istinito ako su vrijednosti razlicite                                            |
|     <    |     manje     | istinito ako je vrijednost s lijeve strane manja od vrijednosti s desne strane   |
|     >    |      vece     | istinito ako je vrijednost s lijeve strane veca od vrijednosti s desne strane    |
|    <=    | manje jednako | istinito ako je vrijednost s lijeve strane manja ili jednaka vrijednosti s desne |
|    >=    |  vece jednako | istinito ako je vrijednost s lijeve strane veca ili jednaka vrijednosti s desne  |

| OPERATOR |    IME   |               SLUCAJ ISTINITOSTI              |
|:--------:|:--------:|-----------------------------------------------|
|    &&    |  i (and) | istinito ako su obje vrijednosti istinite     |
|   \|\|   | ili (or) | istinito ako je bilo koja vrijednost istinita |
|     !    | ne (not) | istinito ako je vrijednost lazna              |

## Primjeri:
Primjer 1
```c
int a = 5;
int b = 10;

if (a > b)
  printf("Broj a je veci od broja b\n");
else if (a < b)
  printf("Broj a je manji od broja b\n");
else
  printf("Broj a je jednak broju b\n");
```
```
Broj a je manji od broja b
```
Primjer 2
```c
int a = -10;

if (a % 2 == 0 && a > 0)
  printf("Broj je prirodan\n");
else if (a % 2 == 0 && a < 0)
  printf("Broj je negativan cijeli\n");
else
  printf("Broj je decimalan\n");
```
```
Broj je negativan cijeli
```
