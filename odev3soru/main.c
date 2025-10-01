#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf = 'u';
    char sesli_harfler[]="aeıioöuüAEIİOÖUÜ";
    int x, sesli=0;
    for(x = 0; sesli_harfler[x]!='\0'; x++)
    {
        if(harf == sesli_harfler[x]){
            sesli=1;
            break;
        }
    }
    if(sesli)
        printf("girilen harf seslidir.\n",harf);
    else
        printf("girilen harf sessizdir.\n",harf);
    return 0;
        }



