#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tahmin, sayi, deneme = 0;

    srand(time(0));
    sayi = rand() % 100 + 1;

    printf("1 ile 100 arasinda tuttugum sayiyi tahmin et!\n");

    do {
        printf("Tahmininiz: ");
        scanf("%d", &tahmin);
        deneme++;

        if (tahmin < sayi) {
            printf("Daha buyuk bir sayi girin.\n");
        } else if (tahmin > sayi) {
            printf("Daha kucuk bir sayi girin.\n");
        } else {
            printf("Tebrikler! %d denemede buldunuz.\n", deneme);
        }
    } while (tahmin != sayi);

    return 0;
}
