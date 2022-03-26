#include <stdio.h>

int main()
{
    int a, i, par = 0, nep = 0;
    int *pa = &a, *ppar = &par, *pnep = &nep;
    for (i = 0; i < 8; i++) {
        printf("Unesi %d. broj: ", i+1);
        scanf("%d", pa);
        if (*pa % 2 == 0 && *pa % 5 == 0) {
            (*ppar)++; // razlog za zagrade u pokazivaci/README.md pod Napomene
        }
        else if (*pa % 2 == 1 && *pa % 3 == 0) {
            (*pnep)++; // razlog za zagrade u pokazivaci/README.md pod Napomene
        }
    }
    printf("Neparnih brojeva djeljivih sa 3 je: %d\n", *pnep); 
    printf("Parnih brojeva djeljivih sa 5 je: %d\n", *ppar);
    return 0;
}