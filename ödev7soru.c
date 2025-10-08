#include <stdio.h>
#include <unistd.h>

int main() {
    char ch;
    int i = 0;
    int direction = 1;

    printf("Bir karakter girin: ");
    scanf(" %c", &ch);

    while (1) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        printf("%c\n", ch);

        i += direction;

        if (i == 20) {
            direction = -1;
        } else if (i == 0) {
            direction = 1;
        }

        usleep(10000);
    }

    return 0;
}
