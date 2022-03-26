#include <stdio.h>

int main()
{
    int a = -1;
    int *pa = &a;
    char znak;
    char *pznak = &znak;
    printf("Unesi znak: ");
    scanf(" %c", pznak);
    switch (*pznak) {
        case 'j':
            printf("jedan\n");
            *pa = 1;
            break;
        case 'd':
            printf("dva\n");
            *pa = 2;
            break;
        case 't':
            printf("tri\n");
            *pa = 3;
            break;
        case 'c':
            printf("cetiri\n");
            *pa = 4;
            break;
        case 'p':
            printf("pet\n");
            *pa = 5;
            break;
        default:
            printf("%c\n", *pznak);
    }
    if (*pa != -1) {
        printf("a=%d\n", *pa);
    }
    return 0;
}