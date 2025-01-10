#include <stdio.h>

int main() {
    int x[3];

    int ukuran[4][3] = {
        {10, 40, 90}, 
        {14, 60, 120}, 
        {18, 80, 180}, 
        {25, 100, 220}
    };

    char ket[4] = {'S', 'M', 'L', 'X'};

    // Input data
    for (int i = 0; i < 3; i++) {
        scanf("%d", &x[i]);
    }

    // Cek ukuran berdasarkan batasan
    for (int i = 0; i < 4; i++) {
        if (x[0] <= ukuran[i][0] && x[1] <= ukuran[i][1] && x[2] <= ukuran[i][2]) {
            printf("%c\n", ket[i]);
            return 0;
        }
    }

    // Jika tidak sesuai batas, default ukuran terbesar
    printf("X\n");
    
    return 0;
}
