#include <stdio.h>

int main() {
    int a=0, b=0, c=0, temp=0;

    printf("Üç sayi gir: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }

    printf("Sirali: %d %d %d\n", a, b, c);

    return 0;
}
