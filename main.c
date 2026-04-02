#include <stdio.h>
#include <stdlib.h>

// Deklarasi fungsi
void kalkulatorDiskon();
void splitBill();
void bungaTabungan();
void sisaUangHarian();
void tekanEnter();

// Fungsi utama
int main() {
    int pilihan;

    do {
        printf("\n=====================================\n");
        printf("  APLIKASI MANAJEMEN UANG MAHASISWA\n");
        printf("=====================================\n");
        printf("1. Kalkulator Diskon Belanja\n");
        printf("2. Kalkulator Split Bill / Patungan\n");
        printf("3. Kalkulator Bunga Tabungan\n");
        printf("4. Kalkulator Sisa Uang Harian\n");
        printf("0. Keluar\n");
        printf("-------------------------------------\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                kalkulatorDiskon();
                break;
            case 2:
                splitBill();
                break;
            case 3:
                bungaTabungan();
                break;
            case 4:
                sisaUangHarian();
                break;
            case 0:
                printf("\nTerima kasih telah menggunakan program ini.\n");
                break;
            default:
                printf("\nPilihan tidak valid!\n");
        }

    } while(pilihan != 0);

    return 0;
}
// FUNGSI 1: DISKON
void kalkulatorDiskon() {
    float harga, diskon, total;

    printf("\n-- Kalkulator Diskon --\n");

    printf("Masukkan harga awal: ");
    scanf("%f", &harga);

    printf("Masukkan persen diskon: ");
    scanf("%f", &diskon);

    if (diskon < 0 || diskon > 100) {
        printf("Diskon tidak valid!\n");
        return;
    }

    total = harga - (harga * diskon / 100);

    printf("Harga setelah diskon: Rp %.2f\n", total);

    tekanEnter();
}

// FUNGSI 4: SISA UANG
void sisaUangHarian() {
    float uang, pengeluaran;

    printf("\n-- Sisa Uang Harian --\n");

    printf("Masukkan uang saku hari ini: ");
    scanf("%f", &uang);

    printf("Masukkan total pengeluaran: ");
    scanf("%f", &pengeluaran);

    printf("Sisa uang hari ini: Rp %.2f\n", uang - pengeluaran);

    tekanEnter();
}

// FUNGSI TAMBAHAN
void tekanEnter() {
    printf("\nTekan ENTER untuk kembali ke menu...");
    getchar(); // buang newline
    getchar(); // tunggu enter
}

// FUNGSI 3: BUNGA TABUNGAN
void bungaTabungan() {
    float saldo, bunga, hasil;

    printf("\n-- Bunga Tabungan Sederhana --\n");

    printf("Masukkan saldo awal: ");
    scanf("%f", &saldo);

    printf("Masukkan bunga (%% per bulan): ");
    scanf("%f", &bunga);

    if (bunga < 0) {
        printf("Bunga tidak valid!\n");
        return;
    }

    hasil = saldo + (saldo * bunga / 100);

    printf("Total saldo setelah bunga: Rp %.2f\n", hasil);

    tekanEnter();
}