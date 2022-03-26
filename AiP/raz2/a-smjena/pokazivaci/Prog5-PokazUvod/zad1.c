#include <stdio.h>

int main()
{
    int a, *pa = &a;
    printf("Unesi broj: ");
    scanf("%d", pa);
    if (*pa % 3 == 0) {
        printf("Broj %d je djeljiv s 3\n", *pa);
    } else {
        printf("Broj %d nije djeljiv s 3\n", *pa);
    }
    return 0;
}