## Funkcije i tipovi za rad s datotekama
### Tip `FILE`
Objekt `FILE` je objekt koji je obicno stvoren kroz funkciju `fopen` i nikada se ne koristi direktno.<br>
Pointeri na `FILE` objekt su tipa `FILE *` i njih koristimo za rad sa `FILE` objektima.


### Funkcija `fopen`
Koristi se za otvaranje ili stvaranje datoteke.<br>
Internalna deklaracija funkcije:
```c
FILE * fopen ( const char * filename, const char * mode )
```
Iz ovoga saznajemo return tip i parametre funkcije.<br>
Funkcija `fopen` returna podatak tipa `FILE *` (pointer na `FILE` objekt).<br>
Potrebno je spremiti taj pointer za rad s tom datotekom.<br>
Ako je returnana vrijednost `NULL`, znaci da datoteka nije otvorena/stvorena zbog neke greske.<br>
Funkcija trazi 2 parametra:
  - ime datoteke (npr. `"podatci.dat"`)
  - mode (nacin) rada (mogucnosti [ovdje](https://github.com/sh0tzz/tsrb/tree/main/AiP/raz2/a-smjena/datoteke#nacini-modovi-rada-s-datotekama))

Primjer:
```c
FILE *fp;
fp = fopen("nekaDatoteka.txt", "r");
```
Cesto pitanje kod funkcije `fopen` jest ekstenzija datoteka.<br>
**NEMA** nikakvih limitacija oko ekstenzija datoteka s kojima se moze raditi.<br>
Ekstenzije nisu potrebne. Moguce je pisati i citati datoteke koje nemaju ekstenzije.


### Funkcija `fclose`
Funkcija se koristi za zatvaranje otvorene datoteke.<br>
Internalna deklaracija funkcije:
```c
int fclose ( FILE * stream );
```
Jedini parametar je filestream, to jest pointer na `FILE` objekt.


### Funkcija `fprintf`
Koristi se za upisivanje podataka u datoteku.<br>
Internalna deklaracija funkcije:
```c
int fprintf (FILE * stream, const char * format, [values])
```
Parametri:
  - pointer na `FILE` objekt (filestream)
  - format string, to jest string koji opisuje format podataka (npr: `"%s %d"`)
  - daljnji parametri su vrijednosti koje se upisuju (moraju odgovarati format stringu)

Primjer:
```c
FILE *fp;
int a = 5;
fp = fopen("nekaDatoteka.txt", "w");
fprintf(fp, "%d %f", a, 3.14);
```


### Funkcija `fscanf`
Koristi se za citanje podataka iz datoteke.<br>
Internalna deklaracija funkcije:
```c
int fscanf ( FILE * stream, const char * format, ... )
```
Parametri:
  - pointer na `FILE` objekt (filestream)
  - format string, to jest string koji opisuje format podataka (npr: `"%s %d"`)
  - daljnji parametri su adrese ili varijable na koje se spremaju procitane vrijednosti (moraju odgovarati format stringu)

Primjer:
```c
FILE *fp;
int a;
float b, *pb = &b;
fp = fopen("nekaDatoteka.txt", "r");
fscanf(fp, "%d %f", &a, b);
```


### Funkcija `fwrite`
Koristi se za neformatiran upis podataka u datoteku.<br>
Internalna deklaracija funkcije:
```c
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
```
Parametri:
  - pointer na array (polje) elemenata sa vrijednostima (ono sto zelimo upisati)
  - velicina vrijednosti koje se upisuju (vjv cete koristiti `sizeof()`)
  - koliko puta upisati vrijednosti (najcesce se postavlja kao `1`)
  - pointer na `FILE` objekt (filestream)

Primjer:
```c
FILE *fp;
struct ucenik {
    char ime[16];
    int godine;
} a;
a.ime = "Marjan";
a.godine = 16;
fp = fopen("nekaDatoteka.txt", "w");
fwrite(&a, sizeof(struct ucenik), 1, fp);
```

### Funkcija `fread`
Koristi se za neformatirano citanje podataka iz datoteke.<br>
Internalna deklaracija funkcije:
```c
size_t fread(const void *ptr, size_t size, size_t nmemb, FILE *stream)
```
Parametri:
  - pointer na array (polje) elemenata sa vrijednostima (ono sto zelimo procitati)
  - velicina vrijednosti koje se citaju (vjv cete koristiti `sizeof()`)
  - koliko puta procitati vrijednosti (najcesce se postavlja kao `1`)
  - pointer na `FILE` objekt (filestream)

Primjer:
```c
FILE *fp;
struct ucenik {
    char ime[16];
    int godine;
} a;
fp = fopen("nekaDatoteka.txt", "r");
fread(&a, sizeof(struct ucenik), 1, fp);
```

## Nacini (modovi) rada s datotekama
Puna tablica
| MODE | FILE: OPEN | FILE: NOVO / OVERWRITE | U/I: CITANJE | U/I: PISANJE | U/I: DODAVANJE |
|------|------------|------------------------|--------------|--------------|----------------|
| r    | +          |                        | +            |              |                |
| r+   | +          |                        | +            | +            |                |
| w    |            | +                      |              | +            |                |
| w+   |            | +                      | +            | +            |                |
| a    | +          | +                      |              |              | +              |
| a+   | +          | +                      | +            | +            |                |

Kratka tablica
| MODE | DATOTEKA                     | ULAZ / IZLAZ      |
|------|------------------------------|-------------------|
| r    | otvaranje                    | citanje           |
| r+   | otvaranje                    | citanje i pisanje |
| w    | nova / overwrite             | pisanje           |
| w+   | nova / overwrite             | citanje i pisanje |
| a    | otvaranje ili nova/overwrite | dodavanje         |
| a+   | otvaranje ili nova/overwrite | citanje i pisanje |
