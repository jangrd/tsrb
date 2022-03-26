#include <stdio.h>

int main()
{
    int a, b, c, max;
    int *pa = &a, *pb = &b, *pc = &c, *pmax = &max;
    printf("Unesi 3 broja: ");
    scanf("%d %d %d", pa, pb, pc);
    *pmax = *pa;
    if (*pb > *pmax) {
        *pmax = *pb;
    }
    if (*pc > *pmax) {
        *pmax = *pc;
    }
    printf("Najveci broj je %d.\n", *pmax);
    return 0;
}