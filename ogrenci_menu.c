#include <stdio.h>
#include <stdlib.h>

void ogrenciEkle() {
    char isim[50];
    printf("Ogrencinin adini girin: ");
    scanf("%s", isim);
    printf("'%s' isimli ogrenci eklendi.\n", isim);
}

void ogrenciListele() {
    printf("Simdilik listelenecek ogrenci yok.\n");
}

void cikis() {
    printf("Programdan cikiliyor...\n");
    exit(0);
}

int main() {
    int secim;

    while (1) {
        printf("\n=== Ogrenci Yönetim Sistemi ===\n");
        printf("1. Ogrenci Ekle\n");
        printf("2. Ogrencileri Listele\n");
        printf("3. Cikis\n");
        printf("Seciminizi girin: ");
        scanf("%d", &secim);

        switch(secim) {
            case 1:
                ogrenciEkle();
                break;
            case 2:
                ogrenciListele();
                break;
            case 3:
                cikis();
                break;
            default:
                printf("Gecersiz secim. Tekrar deneyin.\n");
        }
    }

    return 0;
}
