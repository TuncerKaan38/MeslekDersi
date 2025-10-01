#include <stdio.h>

int main() {
    char harf = 0;

    printf("Bir harf gir: ");
    scanf(" %c", &harf);

    if (harf=='a' || harf=='e' || harf=='i' || harf=='o' || harf=='u' ||
        harf=='A' || harf=='E' || harf=='I' || harf=='O' || harf=='U') {
        printf("%c Sesli harftir\n", harf);
    } else {
        printf("%c Sessiz harftir\n", harf);
    }

    return 0;
}
