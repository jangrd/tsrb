#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Unesi broj: ");
    scanf("%d", &a);
    if (a >= 0) {
        // `(float)` se koristi jer sqrt() ocekuje float
        float korijen = sqrt((float)a);
        printf("%.2f\n", korijen);
    }
    else {
        printf("Broj nema realan korijen\n");
    }
    return 0;
}