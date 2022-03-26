#include <stdio.h>

int main()
{
	struct ucenik {
		char ime[16];
		char prezime[16];
		float uspjeh;
	} a, b;
	printf("Unesi ime, prezime i uspjeh 1. ucenika: ");
	scanf("%s %s %f", a.ime, a.prezime, &a.uspjeh);
	printf("Unesi ime, prezime i uspjeh 2. ucenika: ");
	scanf("%s %s %f", b.ime, b.prezime, &b.uspjeh);	
	if (a.uspjeh > b.uspjeh)
		printf("%s %s\n", a.ime, a.prezime);
	else if (b.uspjeh > a.uspjeh)
		printf("%s %s\n", b.ime, b.prezime);
	else
		printf("Ucenici imaju jednak uspjeh\n");
	return 0;
}
