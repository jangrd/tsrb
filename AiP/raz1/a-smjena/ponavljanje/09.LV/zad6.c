#include <stdio.h>

int main()
{
    int i, d, j;
    printf("Brojevi sa parnim zbrojem znamenki:");
    for (i = 10; i <= 20; i++) {
        d = i / 10;
        j = i % 10;
        if ((d + j) % 2 == 0) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}