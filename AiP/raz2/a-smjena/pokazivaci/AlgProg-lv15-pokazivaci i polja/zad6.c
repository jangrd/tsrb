#include <stdio.h>
#include <string.h>

int main()
{
	char a[64];
	char *p_a = &a[0];
	int i;
	printf("Unesi recenicu: ");
	fgets(p_a, 64, stdin); // isto kao gets(a);
	printf("Prva rijec je: ");
	for (i = 0; i < strlen(a); i++) {
		if (*(p_a + i) == ' ') {
			break;
		} else {
			printf("%c", *(p_a + i));
		}
	}
	printf("\n");
	return 0;
}
