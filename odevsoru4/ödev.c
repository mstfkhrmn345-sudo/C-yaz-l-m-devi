#include <stdio.h>
#include <stdlib.h>
int sayi= 43;
int x=1;

int main()
{
    printf(":%d\n",sayi);
    while(x<= sayi)
    {
        if(x>50){
            break;
        }
        if (x/3==0){
            x++;
            continue;
        }
        printf("%d\n",x);
        x++;
    }
    return 0;
}
