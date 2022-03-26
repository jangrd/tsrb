#include <stdio.h>

int main()
{
    int a, count = 0, min, i = 0;
    int *pa = &a, *pcount = &count, *pmin = &min;
    while (1) {
        printf("Unesi broj: ");
        scanf("%d", pa);
        if (i == 0) {
            *pmin = *pa;
        }
        if (*pa == 0) {
            break;
        } else if (*pa < *pmin) {
            *pmin = *pa;
        } else if (*pa > 10 && *pa < 20) {
            (*pcount)++;
        }
        i++;        
    }
    printf("Brojeva izmedu 10 i 20 upisano je: %d\n", *pcount);
    printf("Najmanji upisani broj je: %d\n", *pmin);
    return 0;
}