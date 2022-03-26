#include <stdio.h>

int main()
{
    int a;
    printf("Unesi 3-znam broj: ");
    scanf("%d", &a);
    int s = a / 100;
    int d = a % 100 / 10;
    int j = a % 10;
    int umnozak = s * d * j;
    if (umnozak % 2 == 0)
        printf("Umnozak znamenki je paran\n");
    else
        printf("Umnozak znamenki je neparan\n");
    return 0;
}