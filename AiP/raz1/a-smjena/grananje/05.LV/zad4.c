#include <stdio.h>

int main()
{
    float a;
    printf("Unesi broj: ");
    scanf("%f", &a);
    int cijeli = (int)a;
    // koristi se (int) jer operator `%` ocekuje int
    int decimalni = (int)(a * 100) % 100;
    if (cijeli < decimalni)
        printf("Broj %d je manji od broja %d\n", cijeli, decimalni);
    else if (cijeli > decimalni)
        printf("Broj %d je veci od broja %d\n", cijeli, decimalni);
    else
        printf("Broj %d je jednak broju %d\n", cijeli, decimalni);
    return 0;
}