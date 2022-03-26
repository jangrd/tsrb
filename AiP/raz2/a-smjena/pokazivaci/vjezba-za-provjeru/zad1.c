#include <stdio.h>

int zbr_nep(int *p_a)
{ 
	int zbr=0, i;
	for (i = 0; i < 7; i++)  {
		if (*(p_a + i) % 2 != 0) {
			zbr += *(p_a + i);
		}
	}
	return zbr;
}

int main()
{
	int a[7], i;
	int *p_a = &a[0];
	for (i = 0; i < 7; i++) {
		printf("Unesi %d. broj: ", i+1);
		scanf("%d", p_a+i);
	}
	printf("Zbroj neparnih: %d\n", zbr_nep(p_a));
	return 0;
}
