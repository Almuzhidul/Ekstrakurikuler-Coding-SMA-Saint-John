#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int pilihan, operasi;
    char teks[100];
    float angka1, angka2, hasil;
    int panjang, vokal;

    printf("=== PROGRAM STRING & MATEMATIKA ===\n");

    while (1) { // Perulangan utama untuk menu
        printf("\nMenu:\n");
        printf("1. Analisis String (Panjang & Vokal)\n");
        printf("2. Operasi Matematika (Penjumlahan, Akar Kuadrat, Pangkat)\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                // Analisis String
                printf("\nMasukkan teks: ");
                getchar(); // Menghapus karakter newline dari input sebelumnya
                fgets(teks, sizeof(teks), stdin); // Input string
                teks[strcspn(teks, "\n")] = 0; // Menghapus newline dari string

                panjang = strlen(teks);
                vokal = 0;

                // Hitung jumlah huruf vokal
                for (int i = 0; i < panjang; i++) {
                    char c = teks[i];
                    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                        vokal++;
                    }
                }

                printf("Panjang teks: %d\n", panjang);
                printf("Jumlah huruf vokal: %d\n", vokal);
                break;

            case 2:
                // Operasi Matematika
                printf("\nOperasi Matematika:\n");
                printf("1. Penjumlahan\n");
                printf("2. Akar Kuadrat\n");
                printf("3. Pangkat\n");
                printf("Pilih operasi (1-3): ");
                scanf("%d", &operasi);

                if (operasi == 1) {
                    // Penjumlahan
                    printf("Masukkan angka pertama: ");
                    scanf("%f", &angka1);
                    printf("Masukkan angka kedua: ");
                    scanf("%f", &angka2);
                    hasil = angka1 + angka2;
                    printf("Hasil penjumlahan: %.2f\n", hasil);
                } else if (operasi == 2) {
                    // Akar Kuadrat
                    printf("Masukkan angka: ");
                    scanf("%f", &angka1);
                    if (angka1 < 0) {
                        printf("Tidak dapat menghitung akar kuadrat dari angka negatif.\n");
                    } else {
                        hasil = sqrt(angka1);
                        printf("Hasil akar kuadrat: %.2f\n", hasil);
                    }
                } else if (operasi == 3) {
                    // Pangkat
                    printf("Masukkan angka: ");
                    scanf("%f", &angka1);
                    printf("Masukkan pangkat: ");
                    scanf("%f", &angka2);
                    hasil = pow(angka1, angka2);
                    printf("Hasil %.2f^%.2f = %.2f\n", angka1, angka2, hasil);
                } else {
                    printf("Pilihan operasi tidak valid!\n");
                }
                break;

            case 3:
                // Keluar dari program
                printf("Terima kasih telah menggunakan program ini!\n");
                return 0;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}
