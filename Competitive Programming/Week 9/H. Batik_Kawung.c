#include <stdio.h>

int main() {
    int x, y;
    char c;

    // Input: ukuran pola, karakter pengisi, dan angka diagonal
    scanf("%d %c %d", &x, &c, &y);

    // Loop untuk membuat pola
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            if (j == i || j == (x - i + 1)) {
                printf("%d", y); // Cetak angka di diagonal
            } else {
                printf("%c", c); // Cetak karakter di luar diagonal
            }
        }
        printf("\n"); // Pindah ke baris berikutnya
    }

    return 0;
}
