#include <stdio.h>

int prebroji(int *p_a)
{
	int count = 0, i;
	for (i = 0; i < 5; i++) {
		if (*(p_a + i)/10 % 2 == 1)
			count++; 
	}
	return count;
}

int main()
{
	int a[5], i;
	int *p_a = &a[0];
	for (i = 0; i < 5; i++) {
		printf("Unesi %d. broj: ", i+1);
		scanf("%d", p_a + i);
	}
	printf("Brojeva cija je znamenka desetica neparan broj: %d\n", prebroji(p_a));
	return 0;
}
