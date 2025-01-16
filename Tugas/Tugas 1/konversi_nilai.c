/*
Nama  :Rifqia Hani Milatunnisa
NIM   :L0124074
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nama[49], huruf[3], ulang;
    float nilai;
    
    system("cls");
    puts(" PROGRAM PENGONVERSI NILAI ");
    puts(" ========================= ");
    ulangi:
    printf("Masukkan nama\t:");
    scanf(" %[^\n]", nama);
    printf("Masukkan nilai\t:");
    scanf("%f", &nilai);

    if (nilai < 0 || nilai > 100) {
        printf("\nNilai yang Anda masukkan tidak sesuai");
        return 0;
    }

    if (nilai >= 85) {
        strcpy(huruf, "A");
    }
    else if (nilai >= 80) {
        strcpy(huruf, "A-");
    }
    else if (nilai >= 75) {
        strcpy(huruf, "B+");
    }
    else if (nilai >= 70) {
        strcpy(huruf, "B");
    }
    else if (nilai >= 65) {
        strcpy(huruf, "C+");
    }
    else if (nilai >= 60) {
        strcpy(huruf, "C");
    }
    else if (nilai >= 55) {
        strcpy(huruf, "D");
    }
    else {
        strcpy(huruf, "E");
    }

    printf("\nNama\t\t:%s\nNilai\t\t:%.2f\nKonversi Huruf\t:%s", nama, nilai, huruf);

    printf("\n\nApakah Anda ingin mengakhiri program? (Y/N)  ");
    scanf(" %c", &ulang);
    if (ulang == 'N'|| ulang == 'n') {
        printf("\n\n\n");
        goto ulangi;
    }

    return 0;
}
