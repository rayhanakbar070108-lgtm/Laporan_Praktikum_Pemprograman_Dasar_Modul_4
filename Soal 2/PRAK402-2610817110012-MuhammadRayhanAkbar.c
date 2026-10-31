#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        if (i > 1) printf(" ");
        printf("%d", i);
    }
    printf("\n");

    int awal = (n % 2 == 0) ? n : n - 1;
    for (int i = awal; i >= 2; i -= 2) {
        if (i < awal) printf(" ");
        printf("%d", i);
    }
    printf("\n");

    return 0;
}