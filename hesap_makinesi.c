#include <stdio.h>

int main() {
    char islem;
    float sayi1, sayi2, sonuc;

    printf("Bir islem secin (+, -, *, /): ");
    scanf(" %c", &islem);

    printf("1. sayiyi girin: ");
    scanf("%f", &sayi1);
    printf("2. sayiyi girin: ");
    scanf("%f", &sayi2);

    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            if (sayi2 != 0)
                sonuc = sayi1 / sayi2;
            else {
                printf("Sifira bolme hatasi!\n");
                return 1;
            }
            break;
        default:
            printf("Gecersiz islem!\n");
            return 1;
    }

    printf("Sonuc: %.2f\n", sonuc);
    return 0;
}
