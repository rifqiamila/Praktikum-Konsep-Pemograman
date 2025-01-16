/*
Nama  :Rifqia Hani Milatunnisa
NIM   :L0124074
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void konversiNilai (int nilai, char *huruf, float *angka) {
    if (nilai >= 85) {
        strcpy(huruf, "A");
        *angka = 4.00;
    }
    else if (nilai >= 80) {
        strcpy(huruf, "A-");
        *angka = 3.70;
    }
    else if (nilai >= 75) {
        strcpy(huruf, "B+");
        *angka = 3.30;
    }
    else if (nilai >= 70) {
        strcpy(huruf, "B");
        *angka = 3.0;
    }
    else if (nilai >= 65) {
        strcpy(huruf, "C+");
        *angka = 2.70;
    }
    else if (nilai >= 60) {
        strcpy(huruf, "C");
        *angka = 2.20;
    }
    else if (nilai >= 55) {
        strcpy(huruf, "D");
        *angka = 1.00;
    }
    else {
        strcpy(huruf, "E");
        *angka = 0.00;
    }
}

int main() {
    char nama[49], huruf[3], ulang[2];
    float nilai, angka = 0;
    int check;
    
    while (1) {
        system("cls");
        printf(" PROGRAM PENGONVERSI NILAI \n");
        printf(" ========================= \n");

        printf("Masukkan nama\t: ");
        scanf(" %[^\n]", nama);
        printf("Masukkan nilai\t: ");
        check = scanf("%f", &nilai);

        while ((nilai > 100 || nilai < 0) || check == 0) {
            printf("\nNilai tidak valid\n");
            printf("Masukkan ulang nilai\t: ");
            while (getchar() != '\n');
            check = scanf("%f", &nilai);
        }

        konversiNilai(nilai, &huruf, &angka);

        printf("Nama\t: %s\n", nama);
        printf("Nilai | Angka | Huruf\n");
        printf("%5.1f | %5.1f | %5s \n", nilai, angka, huruf);

        printf("\n\nApakah ingin mengulang pogram (Y/N)\n");
        printf(" >> ");
        scanf("%s", ulang);
        if (strcmp(ulang, "N") == 0 || strcmp(ulang, "n") == 0) {
            printf("\nTerimakasih telah menggunakan pogram\n");
            break;
        }

    }

    return 0;
}
