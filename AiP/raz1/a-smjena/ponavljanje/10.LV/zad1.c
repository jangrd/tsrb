#include <stdio.h>

int main()
{
	float a;
	int i, count = 0;
	for (i = 0; i < 5; i++) {
		while (1) {
			printf("Upisi %d. realan broj: ", i+1);
			scanf("%f", &a);
			if (a != (int)a)
				break;
		}
		if ((int)a % 2 == 0)
			count++;
	}
	printf("Brojeva sa parnim cijelim dijelom: %d\n", count);
	return 0;
}
