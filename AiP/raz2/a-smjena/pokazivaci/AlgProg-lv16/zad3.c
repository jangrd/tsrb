#include <stdio.h>
#include <math.h>

float korijen(float *ptr)
{
	return sqrt((int)*ptr);
}

int main()
{
	float a;
	while (1) {
		printf("Unesi decimalan broj: ");
		scanf("%f", &a);
		if (a == (int)a) {
			printf("Ucitan broj nije decimalan\n");
			break;
		}	
		printf("Korijen cijelog dijela: %.2f\n", korijen(&a));
	}
	return 0;
}
