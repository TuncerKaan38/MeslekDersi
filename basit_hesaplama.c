#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Birinci sayiyi gir: ");
    scanf("%d", &a);

    printf("ikinci sayiyi gir: ");
    scanf("%d", &b);

    printf("\nSonuclar:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d * %d = %d\n", a, b, a / b);

    return 0;
}
