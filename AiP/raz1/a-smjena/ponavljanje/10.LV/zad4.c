#include <stdio.h>

/* 
	program radi do 5 decimala preczno zbog nacina
	na koji rade decimalni brojevi u C-u
*/

int main()
{
	float a;
	int count = 0;
	while (1) {
		printf("Unesi realan broj: ");
		scanf("%f", &a);
		if (a != (int)a)
			break;
	}
	while (a != (int)a)	{
		count++;
		a *= 10;
	}
	printf("Znamenki u decimalnom dijelu: %d\n", count);
	return 0;
}
