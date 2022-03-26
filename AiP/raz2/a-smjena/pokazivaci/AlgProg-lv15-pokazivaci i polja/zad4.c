#include <stdio.h>

int main()
{
	char a[6];
	char *p_a = &a[0];
	int i;
	for (i = 0; i < 6; i++) {
		printf("Unesi %d. znak: ", i+1);
		scanf(" %c", p_a + i);
	}
	int mal = 0, vel = 0;
	printf("Uneseni brojevi su:");
	for (i = 0; i < 6; i++) {
		if (*(p_a + i) >= '0' && *(p_a + i) <= '9') {
			printf(" %c", *(p_a + i));
		} else if (*(p_a + i) >= 'a' && *(p_a + i) <= 'z') {
			mal++;
		} else if (*(p_a + i) >= 'A' && *(p_a + i) <= 'Z') {
			vel++;
		}
	}
	printf("\n");
	if (mal > vel) {
		printf("Ucitano je vise malih slova (%d)\n", mal);
	} else if (vel > mal) {
		printf("Ucitano je vise velikih slova (%d)\n", vel);
	} else {
		printf("Ucitano je jednako malih i velikih slova (%d)\n", mal);
	}
	return 0;
}
