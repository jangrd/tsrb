#include <stdio.h>

int zbroji(float *p_a)
{
	int zbr = 0, i;
	for (i = 0; i < 6; i++) {
		zbr += (int)*(p_a + i);
	}
	return zbr;
}

int main()
{
	float a[6];
	float *p_a = &a[0];
	int i;
	for (i = 0; i < 6; i++) {
		printf("Unesi %d. broj: ", i+1);
		scanf("%f", p_a + i);
	}
	printf("Zbroj cijelih dijelova: %d\n", zbroji(p_a));
	return 0;
}
