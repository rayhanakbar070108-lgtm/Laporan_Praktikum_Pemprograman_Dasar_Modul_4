#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int langkah, jumlah;

    if (a < b) {
        langkah = 1;
        jumlah = b - a + 1;
    } else {
        langkah = -1;
        jumlah = a - b + 1;
    }

    for (int k = 0; k < jumlah; k++) {
        int x = a + k * langkah;
        int y = b - k * langkah;

        if (k > 0) printf(" - ");
        printf("%d %d", x, y);
    }
    printf("\n");

    return 0;
}