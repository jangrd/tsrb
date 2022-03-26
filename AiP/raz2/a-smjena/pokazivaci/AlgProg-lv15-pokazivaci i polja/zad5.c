#include <stdio.h>
#include <string.h>

int main()
{
	char a[64];
	char *p_a = &a[0];
	int i, count = 0;
	printf("Unesi recenicu: ");
	fgets(p_a, 64, stdin); // isto kao gets(a);
	for (i = 0; i < strlen(a); i++) {
		if (*(p_a + i) == 'a' || *(p_a + i) == 'A') {
			count++;
		}
	}
	printf("Slova a (A) u recenici ima: %d\n", count);
	return 0;
}
