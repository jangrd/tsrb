#include <stdio.h>

int main()
{
	float a[5];
	float *p_a = &a[0];
	int b, i, count = 0;
	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj u niz: ", i+1);
		scanf("%f", p_a + i);
	}
	printf("Upisi jednoznamenkast broj: ");
	scanf("%d", &b);
	for (i = 0; i < 5; i++) {
		if ((int)(*(p_a + i) * 100) % 10 == b) {
			count++;
		}
	}
	if (count != 0) {
		printf("Broj %d je jednak znamenci stotina nekog od brojeva iz niza\n", b);
	} else {
		printf("Broj %d nije jednak znamenci stotina nekog od  brojeva iz niza\n", b);
	}
	return 0;
}
