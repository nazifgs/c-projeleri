#include <stdio.h>
#include <stdlib.h>

int main() {
    int secim;
    float bakiye = 1000.0; // Başlangıç bakiyesi
    float miktar;

    while (1) {
        printf("\n=== ATM Uygulamasi ===\n");
        printf("1. Bakiye Goruntule\n");
        printf("2. Para Yatir\n");
        printf("3. Para Cek\n");
        printf("4. Cikis\n");
        printf("Seciminizi girin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Mevcut Bakiyeniz: %.2f TL\n", bakiye);
                break;
            case 2:
                printf("Yatirmak istediginiz miktari girin: ");
                scanf("%f", &miktar);
                bakiye += miktar;
                printf("Yeni Bakiyeniz: %.2f TL\n", bakiye);
                break;
            case 3:
                printf("Cekmek istediginiz miktari girin: ");
                scanf("%f", &miktar);
                if (miktar > bakiye) {
                    printf("Yetersiz bakiye!\n");
                } else {
                    bakiye -= miktar;
                    printf("Yeni Bakiyeniz: %.2f TL\n", bakiye);
                }
                break;
            case 4:
                printf("Cikis yapiliyor...\n");
                exit(0);
            default:
                printf("Gecersiz secim!\n");
        }
    }

    return 0;
}
