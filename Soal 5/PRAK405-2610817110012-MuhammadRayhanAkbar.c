#include <stdio.h>

int main(void) {
    int n, k;
    int totalsemuabaris = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        int jumlahbaris = 0;

        for (int j = i; j >= 1; j--) {
            if (j != i) {
                printf(" + ");
            }
            printf("(%d * %d)", j, k);
            jumlahbaris += j * k;
        }
        printf(" = %d\n", jumlahbaris);
        totalsemuabaris += jumlahbaris;
    }
    printf("%d\n", totalsemuabaris);
    return 0;
    
}