#include <stdio.h>

int prebroji(char *p_a)
{
	int mal = 0, vel = 0, i;
	for (i = 0; i < 7; i++) {
		if (*(p_a + i) >= 'A' && *(p_a + i) <= 'Z')
			vel++;
		else if (*(p_a + i) >= 'a' && *(p_a + i) <= 'z')
			mal++;
	}
	if (vel > mal)
		printf("Ucitano je vise velikih slova (%d)\n", vel);
	else if (mal > vel)
		printf("Ucitano je vise malih slova (%d)\n", mal);
	else
		printf("Ucitano je jednako malih i velikih slova (%d)\n", vel);
}

int main()
{
	char a[7];
	char *p_a = &a[0];
	int i;
	for (i = 0; i < 7; i++) {
		printf("Unesi %d. znak: ", i+1);
		scanf(" %c", p_a + i);
	}
	prebroji(p_a);
	return 0;
}
