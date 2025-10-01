#include <stdio.h>

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; i++) {
        if (i % 3 == 0) {
            continue; // 3'e tam bölünenleri atla
        }
        if (i > 50) {
            break; // Sayı 50'den büyükse döngüyü durdur
        }
        printf("%d\n", i);
    }

    return 0;
}
