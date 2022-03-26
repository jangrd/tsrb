#include <stdio.h>
#include <string.h>

int prebroji(char *p_a, char b)
{
	int count = 0, i, spaceova = 0;
	for (i = 0; i < strlen(p_a); i++) {
		if (*(p_a + i) == ' ') {
			if (spaceova == 0)
				spaceova++;
			else
				break;
		}
		if (spaceova == 1 && *(p_a + i) == b)
			count++;
	}
	return count;
}

int main()
{
	char a[64], b;
	char *p_a = &a[0];
	printf("Unesi recenicu: ");
	fgets(p_a, 64, stdin);
	printf("Unesi slovo: ");
	scanf(" %c", &b);
	printf("Slova %c u 2. rijeci ima %d\n", b, prebroji(p_a, b));
	return 0;
}
