#include <stdio.h>

int main() {
    int not1=0, not2=0, not3=0, not4=0;
    double ortalama = 0;

    for (int i = 1; i <= 5; i++) {
        printf("\n%d. Ögrencinin 4 notunu gir: ", i);
        scanf("%d %d %d %d", &not1, &not2, &not3, &not4);

        ortalama = (not1 + not2 + not3 + not4) / 4.0;

        printf("Ortalama = %.2f -> %s\n", ortalama, (ortalama < 50) ? "Kaldi" : "Gecti");
    }

    return 0;
}
