#include <stdio.h>

void zbr_dec(float *p_a)
{
	int i;
	float zbr = 0;
	for (i = 0; i < 5; i++) {
		zbr += *(p_a+i) - (int)*(p_a+i);
	}
	printf("Zbroj decimalnih dijelova: %.2f\n", zbr);
}

int main()
{
	float a[5];
	float *p_a = &a[0];
	int i;
	for (i = 0; i < 5; i++) {
		printf("Unesi %d. broj: ", i+1);
		scanf("%f", p_a + i);
	}
	zbr_dec(p_a);
	return 0;
}
