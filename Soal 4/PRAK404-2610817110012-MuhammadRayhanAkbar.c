#include <stdio.h>

int main() {
    char nama[100];
    int pilihan;
    double a, b;

    printf("Masukkan nama anda : ");
    scanf("%99[^\n]", nama);

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator, %s\n", nama);
            break;
        } else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);

            if (pilihan == 1) {
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
            } else if (pilihan == 2) {
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
            } else if (pilihan == 3) {
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
            } else {
                if (b == 0)
                    printf("Pembagian dengan nol tidak bisa dilakukan\n");
                else
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}