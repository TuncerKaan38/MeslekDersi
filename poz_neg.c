#include <stdio.h>

int main() {
    int sayi = 0;

    printf("Bir sayi gir: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("%d Pozitiftir\n", sayi);
    } else if (sayi < 0) {
        printf("%d Negatiftir\n", sayi);
    } else {
        printf("Sayi sifirdir\n");
    }

    return 0;
}
