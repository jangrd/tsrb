#include <stdio.h>

int main()
{
    int a[64], n, i, count=0, zbr=0;
    int *p_a = &a[0];
    printf("Unesi n: ");
    scanf("%d", &n);    
    for (i = 0; i < n; i++) {
        printf("Unesi %d. broj: ", i+1);
        scanf("%d", p_a + i);
    }
    for (i = 0; i < n; i++) {
        zbr += *(p_a + i);
        if (*(p_a + i) % 3 == 0 || *(p_a + i) % 5 == 0) {
            count++;
        }
    }
    printf("Zbroj: %d\n", zbr);
    printf("Brojeva djeljivih s 3 ili s 5: %d\n", count);
    return 0;
}
