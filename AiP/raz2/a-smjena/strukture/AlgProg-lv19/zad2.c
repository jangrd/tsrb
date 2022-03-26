#include <stdio.h>

int main()
{
	struct ucenik {
		char ime[16];
		char prezime[16];
		int izostanci;
	} a, b, c, min;
	printf("Unesi ime, prezime i izostanke 1. ucenika: ");
	scanf("%s %s %d", a.ime, a.prezime, &a.izostanci);
	printf("Unesi ime, prezime i izostanke 2. ucenika: ");
	scanf("%s %s %d", b.ime, b.prezime, &b.izostanci);
	printf("Unesi ime, prezime i izostanke 3. ucenika: ");
	scanf("%s %s %d", c.ime, c.prezime, &c.izostanci);
	min = a;
	if (b.izostanci < min.izostanci)
		min = b;
	if (c.izostanci < min.izostanci)
		min = c;
	printf("Ucenik sa najmanje izostanaka: %s %s\n", min.ime, min.prezime);
	printf("Prosjecno izostanaka: %.2f\n", (a.izostanci + b.izostanci + c.izostanci) / 3.0);
	return 0;
}

