#include <stdio.h>

int main()
{
	struct ucenik {
		char ime[16];
		char prezime[16];
		char razred[3];
		int hrvatski;
		int matematika;
		int fizika;
		int engleski;
		float prosjek;
	} a, b;
	printf("Unesi ime, prezime, razred 1. ucenika: ");
	scanf("%s %s %s", a.ime, a.prezime, a.razred);
	printf("Unesi ocjene iz hrvatskog, matematike, fizike, engleskog: ");
	scanf("%d %d %d %d", &a.hrvatski, &a.matematika, &a.fizika, &a.engleski);
	printf("Unesi ime, prezime, razred 2. ucenika: ");
	scanf("%s %s %s", b.ime, b.prezime, b.razred);
	printf("Unesi ocjene iz hrvatskog, matematike, fizike, engleskog: ");
	scanf("%d %d %d %d", &b.hrvatski, &b.matematika, &b.fizika, &b.engleski);
	a.prosjek = (a.hrvatski + a.matematika + a.fizika + a.engleski) / 4.0;
	b.prosjek = (b.hrvatski + b.matematika + b.fizika + b.engleski) / 4.0;
	if (a.prosjek > b.prosjek)
		printf("%s %s %s\n", a.ime, a.prezime, a.razred);
	else if (b.prosjek > a.prosjek)
		printf("%s %s %s\n", b.ime, b.prezime, b.razred);
	else
		printf("Ucenici imaju jednak prosjek\n");
	return 0;
}
