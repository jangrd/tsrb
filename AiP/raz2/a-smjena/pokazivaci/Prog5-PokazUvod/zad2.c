#include <stdio.h>

int main()
{
    int a, zbr=0, count=0;
    int *pa = &a, *pzbr = &zbr, *pcount = &count;
    while (1) {
        printf("Unesi broj: ");
        scanf("%d", pa);
        if (*pa % 2 == 0) {
            (*pzbr) += *pa;
            (*pcount)++;
        } else {
            break;
        }
    }
    float sred = (float)*pzbr / *pcount;
    printf("Arit. sred: %.2f\n", sred);
    return 0;
}