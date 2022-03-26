#include <stdio.h>
#include <string.h>

int prebroji(char *p_a)
{
	int count = 0, i;
	for (i = 0; i < strlen(p_a); i++) {
		if (*(p_a + i) == ' ') {
			break;
		}
		if (*(p_a + i) == 'i' || *(p_a + i) == 'I') {
			count++;
		}
	}
	return count;
}

int main()
{
	char a[64];
	char *p_a = &a[0];
	printf("Unesi recenicu: ");
	fgets(p_a, 64, stdin);
	printf("Slova i u 1. rijeci ima: %d\n", prebroji(p_a));
	return 0;
}
