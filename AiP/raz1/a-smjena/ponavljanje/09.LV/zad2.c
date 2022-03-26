#include <stdio.h>

int main()
{
    float a, decim;
    int i, cijel;
    for (i = 0; i < 5; i++) {
        printf("Upisi %d. broj: ", i+1);
        scanf("%f", &a);
        cijel = (int)a;
        decim = a - cijel;
        printf("Cijeli dio: %d, decimalni dio: %.2f\n", cijel, decim);
    }
    return 0;
}