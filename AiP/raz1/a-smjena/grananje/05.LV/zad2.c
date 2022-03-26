#include <stdio.h>

int main()
{
    float a;
    printf("Unesi broj: ");
    scanf("%f", &a);
    if (a == (int)a && a != 0) {
        if (a > 0) printf("Broj je prirodan\n");
        else printf("Broj je negativan cijeli\n");
    }
    else printf("Broj je realan\n");
    return 0;
}