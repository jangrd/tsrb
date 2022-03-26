#include <stdio.h>

int main()
{
	float a, max;
	int i = 0;
	while (1) {
		printf("Upisi %d. broj: ", i+1);
		scanf("%f", &a);
		if (a == 0) 
			break;
		if (i == 0)
			max = a;
		else if (a > max && a != (int)a)
			max = a;
		i++;
	}
	printf("Upisana je 0\n");
	printf("Najveci upisani realan broj: %.2f\n", max);
	return 0;
}
