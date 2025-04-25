#include <stdio.h>

int main() {
    int dersSayisi, i;
    float not, toplam = 0, ortalama;

    printf("Kac dersin notunu gireceksiniz? ");
    scanf("%d", &dersSayisi);

    for(i = 1; i <= dersSayisi; i++) {
        printf("%d. dersi girin: ", i);
        scanf("%f", &not);
        toplam += not;
    }

    ortalama = toplam / dersSayisi;
    printf("Not ortalamaniz: %.2f\n", ortalama);

    if (ortalama >= 50) {
        printf("Tebrikler! Gectiniz.\n");
    } else {
        printf("Maalesef kaldiniz.\n");
    }

    return 0;
}
