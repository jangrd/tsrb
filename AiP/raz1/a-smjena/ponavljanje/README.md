## Ukratko
Ponavljanje nam omogucuje skratiti repetitivan kod.

Umjesto da pisemo
```c
printf("Unesi broj: ");
scanf("%d", &a);
printf("Unesi broj: ");
scanf("%d", &a);
printf("Unesi broj: ");
scanf("%d", &a);
.
.
.
```

Mozemo napisati
```c
for (i = 0; i < 3; i++) {
  printf("Unesi broj: ");
  scanf("%d", &a);
}
```

Sada kod izgleda puno urednije bez ponavljanja, a obavlja istu zadacu.

Postoje 3 komande za ponavljanje: `for`, `while` i `do while`.<br>
Komande koje omogucavaju ponavljanje nazivamo petljama, znaci `for` petlja, `while` petlja i `do while` petlja.

## `for` petlja
Njezina sintaksa je sljedeca:
```c
for ( init; uvijet; inkrement ) {
  // kod za ponavljanje
}
```
`init` predstavlja kod koji ce se pokrenuti prije pocetka petlje (samo jednom).<br>
S njime se obicno deklarira varijabla koja ce se koristiti u petlji.<br>
`uvijet` predstavlja uvijet koji ce se provjeriti na svakoj iteraciji petlje.<br>
Ako je uvijet istinit kod unutar petlje ce se izvrsiti. Ako je uvijet lazan zavrsavamo petlju i izlazimo.<br>
S njime se obicno odreduje koliko ce se puta petlja izvrsiti.<br>
`inkrement` predstavlja kod koji ce se pokrenuti svaki puta nakon izvrsavanja koda unutar petlje.<br>
S njime se obicno inkrementira (povecava) varijabla deklarirana u `init`.<br>

#### Primjer:
*ispisi sve brojeve iz intervala [0, 5]*
```c
int i;  // kreiramo varijablu koju cemo koristiti u petlji
// u sljedecoj petlji ce biti:
// `init`       i = 0
// `uvijet`     i <= 5
// `inkrement`  i++
for (i = 0; i <= 5; i++) {
  printf("%d\n", i);
}
```
```
0
1
2
3
4
5
```
Hajdemo sada pisati tijek toga programa:<br>
kreiramo varijablu tipa `int` imena `i`<br>
petlja `init` i = 0; `uvijet` i <= 5; `inkrement` i++<br>
`kod` unutar petlje `printf("%d\n", i);`<br>
Prvo kod petlje se izvrsava `init`, znaci `i` postaje `0`<br>

provjeravamo uvijet. `i <= 5` --> `0 <= 5` --> istinito<br>
izvrsavamo kod unutar petlje (ispisujemo `i`)<br>
izvrsavamo inkrement (povecavamo `i` za 1)<br>

provjeravamo `i <= 5` --> `1 <= 5` --> istinito<br>
ispisujemo `i`<br>
povecavamo `i` za 1<br>

.<br>
.<br>
.<br>

provjeravamo `5 <= 5` --> `5 <= 5` --> istinito<br>
ispisujemo `i`<br>
povecavamo `i` za 1<br>

provjeravamo `i <= 5` --> `6 <= 5` --> lazno<br>
zavrsavamo petlju<br>


# TODO: while, do while
