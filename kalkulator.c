#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);

    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    printf("Pilih operasi:\n");
    printf("1 = Penjumlahan (+)\n");
    printf("2 = Pengurangan (-)\n");
    printf("3 = Perkalian (*)\n");
    printf("4 = Pembagian (/)\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Hasil: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Hasil: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Hasil: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Hasil: %.2f\n", result);
            } else {
                printf("Kesalahan: Tidak dapat membagi dengan nol.\n");
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
