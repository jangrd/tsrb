#include <stdio.h>

int main()
{
	int a[5], b[4], i, j, t;
	int *p_a = &a[0], *p_b = &b[0];
	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj u niz: ", i+1);
		scanf("%d", p_a + i);
	}
	for (i = 0; i < 5; i++) {
		t = *(p_a + i);
		printf("Broj %d bez parnih znamenki: ", t);
		for (j = 3; j > -1; j--) {
			*(p_b + j) = t % 10;
			t /= 10;
		}
		for (j = 0; j < 4; j++) {
			if (*(p_b + j) % 2 == 1) {
				printf("%d", *(p_b + j));
			}
		}
		printf("\n");
	}
	return 0;
}
