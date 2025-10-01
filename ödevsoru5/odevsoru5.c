#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n;
int notlar[5][4];
float ortalama;
for (i = 0; i < 5; i++)

    {
        printf("Ogrenci %d icin 4 not giriniz (0-100 arasi): \n", i+1);
        for (n = 0; n < 4; n++)
            {
            scanf("%d", &notlar[i][n]);
            }
    }

    for (i = 0; i < 5; i++)
    {
        int toplam = 0;
        for (n = 0; n < 4; n++)
            {
            toplam += notlar[i][n];
            }

        ortalama = toplam / 4.0;

        printf("Öðrenci %d ortalamasý: %.2f - ", i+1, ortalama);

        if (ortalama < 50)
            printf("Kaldi\n");
        else
            printf("Geçti\n");
    }

    return 0;
}
