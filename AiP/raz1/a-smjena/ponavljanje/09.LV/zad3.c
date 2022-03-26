#include <stdio.h>

int main()
{
    float a;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Unesi %d. broj: ", i+1);
        scanf("%f", &a);
        if (a == (int)a && a > 0) {
            printf("Broj %.2f je prirodan\n", a);
        } else if (a == (int)a && a < 0) {
            printf("Broj %.2f je negativan cijeli\n", a);
        } else {
            printf("Broj %.2f je realan\n", a);
        }
    }
    return 0;
}