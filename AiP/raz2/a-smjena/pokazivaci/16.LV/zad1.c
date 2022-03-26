#include <stdio.h>

int main()
{
	int a[5], i, isto=1, min;
	int *p_a = &a[0];
	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj u niz: ", i+1);
		scanf("%d", p_a + i);
	}
	for (i = 0; i < 5; i++) {
		if (i == 0) {
			min = *(p_a + i);
		} else if (*(p_a + i) < min) {
			min = *(p_a + i);
		}
		if (i < 5) {
			if (*(p_a + i) == *(p_a + i+1)) {
				isto++;
			}
		}
	}
	if (isto == 5) {
		printf("Upisani su svi brojevi istih vrijednosti!\n");
	} else {
		printf("Najmanji upisani broj: %d\n", min);
	}
	return 0;
}
