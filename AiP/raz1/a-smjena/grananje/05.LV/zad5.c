#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Unesi prvi broj: ");
    scanf("%f", &a);
    printf("Unesi drugi broj: ");
    scanf("%f", &b);
    printf("Unesi treci broj: ");
    scanf("%f", &c);
    float dec_b = b - (int)b;
    float dec_c = c - (int)c;
    float min = a;
    if (dec_b < min - (int)min) min = b;
    if (dec_c < min - (int)min) min = c;
    printf("Broj sa najmanjim decimalnim dijelom: %.2f\n", min);
    return 0;
}