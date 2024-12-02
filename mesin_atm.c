#include <stdio.h>

int main() {
    int pilihan = 0;  // Variabel untuk menyimpan pilihan menu
    int saldo = 1000000;  // Saldo awal
    int jumlah;

    printf("=== SIMULASI ATM SEDERHANA ===\n");

    while (pilihan != 4) {
        // Menampilkan menu
        printf("\nMenu:\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Uang\n");
        printf("3. Setor Uang\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Saldo Anda saat ini: Rp %d\n", saldo);
                break;
            case 2:
                printf("Masukkan jumlah uang yang ingin ditarik: Rp ");
                scanf("%d", &jumlah);
                if (jumlah > saldo) {
                    printf("Saldo tidak mencukupi!\n");
                } else if (jumlah <= 0) {
                    printf("Jumlah tidak valid!\n");
                } else {
                    saldo -= jumlah;
                    printf("Berhasil menarik uang. Saldo Anda sekarang: Rp %d\n", saldo);
                }
                break;
            case 3:
                printf("Masukkan jumlah uang yang ingin disetor: Rp ");
                scanf("%d", &jumlah);
                if (jumlah <= 0) {
                    printf("Jumlah tidak valid!\n");
                } else {
                    saldo += jumlah;
                    printf("Berhasil menyetor uang. Saldo Anda sekarang: Rp %d\n", saldo);
                }
                break;
            case 4:
                printf("Terima kasih telah menggunakan layanan kami!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}
