/*
Nama  : Rifqia Hani Milatunnisa
NIM   : L0124074

Penjelasan Program:
di program "Uang Kaget" pertama user akan diminta untuk menginputkan salah satu angka antara 1 sampai 5.
Angka yang dipilih akan menentukan berapa banyak nominal uang yang akan dapat dibelanjakan oleh user.
User akan diminta memasukkan barang yang igin dibeli sebanyak banyaknya (atau dalam kasus ini 30).
Output akan berupa barang yang berhasil dibeli user sesuai dengan jumlah uang yang tersedia dan prioritas barang.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    system("cls");
    int x[6] = {3000000, 10000000, 5000000, 4000000, 9000000}, y, uang; // input uang
    char nama[49];                                                      // string nama
    // array jenis barang, nama, dan harganya
    char jenis[6][30] = {{"Bahan pokok"}, {"Peralatan rumah tangga"}, {"Elektronik"}, {"Emas"}, {"Makanan"}};
    char bp[7][30] = {{"Beras 10 kg"}, {"Gula 1 kg"}, {"Minyak 1 liter"}, {"Telur 1 kg"}, {"Daging ayam 1 kg"}, {"Garam 100 gram"}};
    int hbp[7] = {145000, 18600, 25000, 27500, 39000, 2500};
    char prt[6][40] = {{"Kasur"}, {"Meja"}, {"Kompor"}, {"Ember"}, {"Payung"}};
    int hprt[6] = {925000, 519000, 301000, 27000, 25000};
    char elc[6][30] = {{"Televisi"}, {"Mesin cuci"}, {"Lemari es"}, {"Rice cooker"}, {"Smartphone"}};
    int helc[6] = {1859000, 1590000, 1650000, 268000, 2500000};
    char mak[6][20] = {{"Nasi goreng"}, {"Sate ayam"}, {"Martabak"}, {"Bakso"}, {"Mie goreng"}};
    int hmak[6] = {15000, 35000, 25000, 15000, 11000};
    int ajenis = -1, abp, aprt, aelc, amak, jb;
    // array unutk menyimpan hasil input
    char barang[30][30];
    int harga[30] = {0};
    int jumlah[30] = {0};
    int total = 0, jmlbr = 0;

    printf("================ Uang Kaget ================\n");
    printf("============================================\n");
    printf("\nMasukkan nama Anda\t: ");
    scanf(" %[^\n]", nama);
    printf("Pilih angka 1-5\t: "); // input uang
    scanf("%d", &y);

    if (y < 1 || y > 5) {
        printf("\nMaaf Anda gagal mendapatkan hadiah uang kaget!!");
        return 1;
    }

    uang = x[y - 1]; // uang yang didapat
    printf("\n%s, Selamat Anda mendapatkan uang kaget sebesar %d\n", nama, uang);
    while (ajenis != 0) { // input barang yang ingin dibeli
        do {
            printf("\nSilahkan masukkan barang yang Anda ingin beli, pastikan sesuai dengan prioritas Anda (0 to exist)\n");
            for (int i = 0; i < 5; i++) {
                printf("%d. %s\n", i + 1, jenis[i]);
            }
            printf("Pilih jenis barang yang ingin dibeli (1-5)\t: ");
            scanf("%d", &ajenis);

            switch (ajenis) {
            case 1:
                do {
                    for (int j = 0; j < 6; j++) {
                        printf("\n%d. %s", j + 1, bp[j]);
                    }
                    printf("\nPilih barang yang ingin dibeli (1-6)\t: ");
                    scanf("%d", &abp);
                    printf("Jumlah yang ingin dibeli\t: ");
                    scanf("%d", &jb);
                    strcpy(barang[jmlbr], bp[abp - 1]);
                    harga[jmlbr] += hbp[abp - 1];
                } while (abp < 1 || abp > 6);
                break;
            case 2:
                do {
                    for (int j = 0; j < 5; j++) {
                        printf("\n%d. %s", j + 1, prt[j]);
                    }
                    printf("\nPilih barang yang ingin dibeli (1-5)\t: ");
                    scanf("%d", &aprt);
                    printf("Jumlah yang ingin dibeli\t: ");
                    scanf("%d", &jb);
                    strcpy(barang[jmlbr], prt[aprt - 1]);
                    harga[jmlbr] += hprt[aprt - 1];
                } while (aprt < 1 || aprt > 5);
                break;
            case 3:
                do {
                    for (int j = 0; j < 5; j++) {
                        printf("\n%d. %s", j + 1, elc[j]);
                    }
                    printf("\nPilih barang yang ingin dibeli (1-5)\t: ");
                    scanf("%d", &aelc);
                    printf("Jumlah yang ingin dibeli\t: ");
                    scanf("%d", &jb);
                    strcpy(barang[jmlbr], elc[aelc - 1]);
                    harga[jmlbr] += helc[aelc - 1];
                } while (aelc < 1 || aelc > 5);
                break;
            case 4:
                printf("Masukkan berapa gram yang ingin dibeli (maks 2)\t: ");
                scanf("%d", &jb);
                strcpy(barang[jmlbr], "Emas");
                harga[jmlbr] += 1407000;
                break;
            case 5:
                do {
                    for (int j = 0; j < 5; j++) {
                        printf("\n%d. %s", j + 1, mak[j]);
                    }
                    printf("\nPilih barang yang ingin dibeli (1-5)\t: ");
                    scanf("%d", &amak);
                    printf("Jumlah yang ingin dibeli\t: ");
                    scanf("%d", &jb);
                    strcpy(barang[jmlbr], mak[amak - 1]);
                    harga[jmlbr] += hmak[amak - 1];
                } while (amak < 1 || amak > 5);
                break;
            }
            jumlah[jmlbr] += jb;
            jmlbr++;
        } while (ajenis < 0 || ajenis > 5);
    }

    printf("\n\nDaftar Barang yang Berhasil Dibeli"); // output
    printf("\n| No |      Barang      | Harga Satuan | Jumlah |   Harga   |\n");
    printf("|----|------------------|--------------|--------|-----------|\n");
    int jharga;
    for (int i = 0; i < jmlbr - 1; i++) {
        jharga = harga[i] * jumlah[i];
        total += jharga;
        if (total >= uang) { 
            total -= jharga;
            break;
        }
        printf("| %2d | %16s | %12d | %6d | %9d |\n", i + 1, barang[i], harga[i], jumlah[i], jharga);
    }
    printf("|Total= %51d |\n", total);
    printf("|Sisa Uang= %47d |", uang - total);

    return 0;
}
