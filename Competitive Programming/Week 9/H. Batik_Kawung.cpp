#include <iostream>
using namespace std;

int main() {
    int x, y;
    char c;

    // Input: ukuran pola, karakter pengisi, dan angka diagonal
    cin >> x >> c >> y;

    // Loop untuk membuat pola
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            if (j == i || j == (x - i + 1)) {
                cout << y; // Cetak angka di diagonal
            } else {
                cout << c; // Cetak karakter di luar diagonal
            }
        }
        cout << endl;// Pindah ke baris berikutnya
    }

    return 0;
}
