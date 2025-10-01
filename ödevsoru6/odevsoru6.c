#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a, b, c;

    printf("3 adet sayi giriniz: ");
    scanf("%d %d %d", &a, &b, &c);


    if(a <= b && a <= c)
    {
        if(b <= c)
            printf("Siralama: %d %d %d\n", a, b, c);
        else
            printf("Siralama: %d %d %d\n", a, c, b);
    }

    else if(b <= a && b <= c)

    {
        if(a <= c)
            printf("Siralama: %d %d %d\n", b, a, c);
        else
            printf("Siralama: %d %d %d\n", b, c, a);
    }

    else
    {
        if(a <= b)
            printf("Siralama: %d %d %d\n", c, a, b);
        else
            printf("Siralama: %d %d %d\n", c, b, a);
    }

    return 0;
}
