#include <stdio.h>

int main() {
    int n;
    char simbol;

    scanf("%d %c", &n, &simbol);

    for (int i = 1; i <= 50; i++) {
        if (i % n == 0)
            printf("%c", simbol);
        else
            printf("%d", i);

        if (i < 50)
            printf(" ");
    }
    printf("\n");

    return 0;
}