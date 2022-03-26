#include <stdio.h>

int main()
{
	float a[32];
	int  n, i;
	float *p_a = &a[0];
	printf("Unesi n: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Unesi %d. broj: ", i+1);
		scanf("%f", p_a + i);
	}
	int par = 0, nep = 0, dec = 0;
	for (i = 0; i < n; i++) {
		if ((int)*(p_a + i) % 2 == 0) {
			par++;
		} else {
			nep++;
		}
		if (*(p_a + i) - (int)*(p_a + i) > 0.5) {
			dec++;
		}
	}
	if (par > nep) {
		printf("Vise je brojeva ciji je cijeli dio paran (%d)\n", par);
	} else if (nep > par) {
		printf("Vise je brojeva ciji je cijeli dio neparan (%d)\n", nep);
	} else {
		printf("Jednako je brojeva ciji je cijeli dio paran i kojima je cijeli dio neparan (%d)\n", par);
	}
	printf("Brojeva ciji je decimalni dio >0.5: %d\n", dec);
	return 0;
}
