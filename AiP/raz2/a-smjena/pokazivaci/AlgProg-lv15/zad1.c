#include <stdio.h>

int main()
{
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;
    printf("Unesi 2 broja: ");
    scanf("%d %d", pa, pb);
    *pc = *pa + *pb;
    printf("a=%d    adresa varijable = %p\n", *pa, pa);
    printf("b=%d    adresa varijable = %p\n", *pb, pb);
    printf("c=%d    adresa varijable = %p\n", *pc, pc);
    return 0;
}