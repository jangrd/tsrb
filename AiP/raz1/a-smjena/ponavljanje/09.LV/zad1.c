#include <stdio.h>

int main()
{
    float a;
    int i, count = 0;
    for (i = 0; i < 5; i++) {
        printf("Unesi %d. prirodan broj: ", i+1);
        scanf("%f", &a);
        if (a == (int)a && a > 0) {
            if ((int)a % 2 == 1) {
                count++;
            }
        } else {
            i--;
        }
    }
    printf("Neparnih brojeva: %d\n", count);
    return 0;
}