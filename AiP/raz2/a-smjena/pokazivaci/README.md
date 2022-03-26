## Prezentacija
[**pokazivaci.pptx**](https://github.com/sh0tzz/tsrb-aip/raw/master/raz2/a-smjena/pokazivaci/pokazivaci.pptx)<br>

## Definicija
Pointeri su varjable koje sadrze memorijske adrese drugih varijabli.<br>
Laksa definicija je da su pointeri varijable koje pointaju (pokazuju) na druge varijable.<br>

## Objasnjenje definicije
| IME VARIJABLE | VRIJEDNOST | MEMORIJSKA ADRESA |
|:-------------:|:----------:|:-----------------:|
|       a       |      2     |       0x0001      |
|       b       |      3     |       0x0002      |
|   pointer_a   |   0x0001   |       0x0003      |

 *(memorijske lokacije su u praksi uvijek drugacije i rijetko kada idu po redu)* <br>
 
Svaka varijabla je spremljena na vlastitu, **jedinstvenu** memorijsku lokaciju.<br>
Ako citamo vrijednost varijable `pointer_a` vidimo da ona sadrzi memorijsku lokaciju varijable `a` `(0x0001)` i time pokazuje na nju.<br>
Ispisivanjem vrijednosti varijable `a` dobijemo isto kao kada ispisemo vrijednost na memorijskoj lokaciji `0x0001`

## Deklaracija
Kod deklaracije je potrebno ispred imena varijable staviti `*` kako bi program znao da je ta varijabla pointer.<br>
```
tip *ime;
tip *ime = neka_adresa;
tip *ime = &neka_varijabla;
```
Pointer varijable se obicno imenuju tako da se stavi `p` ili `p_` ispred onoga na sto pointaju.<br>
Pointer na varijablu `Kocka` ce se zvati `pKocka`.<br>
Pointer na varijablu `counter` ce se zvati `p_counter`.<br>

Primjeri:
```c
int *ptr;
int *pa = &a;
char *pb = &b;
float *pc = &c;
```


## Operatori
Operator `&`:<br>
\- adresni operator (addressof operator)<br>
\- vraca memorijsku adresu trazene varijable<br>

Operator `*`:<br>
\- vrijednosni / sadrzajni operator<br>
\- vraca vrijednost s memorijske lokacije<br>

### Kako ih zapamtiti!
Lakse je razmisljati o operatoru `&` tako da on uzima adresu varijable koju mu damo,<br>
a operator `*` prati danu adresu do varijable.<br>
Znaci operatori `&` i `*` su suprotni.

## Format
Pri ispisu kao format koristi se `%p`<br>
Npr: `printf("Varijabla kocka se u memoriji nalazi na: %p", &kocka);`

## Primjeri:
Tablica za iduce primjere:<br>
*(neki primjeri ce koristiti samo dio tablice)*
| IME VARIJABLE | VRIJEDNOST | MEMORIJSKA ADRESA |
|:-------------:|:----------:|:-----------------:|
|       a       |     5      |       0x0001      |
|       b       |     10     |       0x0002      |
|       pa      |   0x0001   |       0x0003      |
|       pb      |   0x0002   |       0x0004      |

---
Primjer 1
```c
int a;
// na varijablu 'pa' se sprema memorijska lokacija varijable 'a'
int *pa = &a;

printf("Adresa varijable a: %p\n", &a);
printf("Pointer na varijablu a: %p\n", pa);
```
```
Adresa varijable a: 0x0001
Pointer na varijablu a: 0x0001
```
---
Primjer 2
```c
int a, b;
int *pa = &a, *pb = &b;

a = 5;
// na memorijsku lokaciju u varijabli 'pb' se sprema vrijednost 10
*pb = 10;

printf("Vrijednosti varijabli a b: %d %d\n", a, b);
printf("Vrijednosti na adresama: %d %d\n", *pa, *pb);
```
```
Vrijednosti varijabli a b: 5 10
Vrijednosti na adresama: 5 10
```

## Napomene
Cesto zelimo povecati vrijednost neke varijable `++` operatorom.<br>
Ako to zelimo napraviti kroz pointer, treba paziti na prioritete operatora.
```c
// ovdje ce se prvo evaluirati operator `++`
// zbog toga ce se vrijednost povecati za 1
// sto znaci da cemo gledati 1 mjesto ispred u memoriji u odnosu gdje je varijabla
// ovo najcesce NE zelimo
*pointer++;

// ovdje ce se prvo evaluirati zagrada
// sto znaci da cemo pogledati na adresu u pointeru
// i vrijednost sa te adrese povecati za jedan
(*pointer)++;
```

### Vise u prezentaciji [ovdje](https://github.com/sh0tzz/tsrb-aip/tree/master/raz2/a-smjena/pokazivaci#prezentacija)
