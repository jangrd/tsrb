#include <stdio.h>

int main()
{
    char a, *pa = &a;
    int count=0, *pcount = &count;
    while (1) {
        printf("Unesi znak: ");
        scanf(" %c", pa);
        if (*pa >= 'a' && *pa <= 'z') {
            printf("%d\n", *pa);
            (*pcount)++;
        } else {
            break;
        }
    }
    printf("Ucitano je %d slova\n", *pcount);
    return 0;
}