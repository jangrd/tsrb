#include <stdio.h>

int main()
{
    int i, djelitelja = 0;
    float a;
    while (1) {
        printf("Upisi prirodan broj: ");
        scanf("%f", &a);
        if (a == (int)a && a > 0) {
            break;
        }
    }
    for (i = 1; i <= a; i++) {
        if ((int)a % i == 0) {
            djelitelja++;
        }
    }
    if (djelitelja > 2) {
        printf("Broj %.2f nije prim\n", a);
    } else {
        printf("Broj %.2f je prim\n", a);
    }
    return 0;
}