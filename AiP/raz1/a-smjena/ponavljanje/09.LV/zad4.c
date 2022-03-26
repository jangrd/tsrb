#include <stdio.h>

int main()
{
    float a;
    int i, max;
    int max_postoji = 0; // postaviti ce se na 1 ako je vec ucitan
    for (i = 0; i < 5; i++) {
        printf("Upisi %d. broj: ", i+1);
        scanf("%f", &a);
        if (max_postoji == 0 && a == (int)a) {
            max = a;
            max_postoji = 1;
        } else if (a == (int)a && a > max) {
            max = a;
        }
    }
    if (max_postoji == 1) {
        printf("Najveci cijeli broj: %d\n", max);
    } else {
        printf("Nije ucitan niti jedan cijeli broj\n");
    }
    return 0;
}