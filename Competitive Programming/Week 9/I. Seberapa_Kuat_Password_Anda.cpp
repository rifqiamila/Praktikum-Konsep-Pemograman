#include <iostream>
#include <string>
using namespace std;

int main() {
    int besar = 0, kecil = 0, angka = 0, karakter = 0;
    string input;

    // Membaca input
    cin >> input;
    int l = input.length();

    // Iterasi untuk memeriksa karakter
    for (char c : input) {
        if (c >= 'A' && c <= 'Z') {
            besar++;
        } else if (c >= 'a' && c <= 'z') {
            kecil++;
        } else if (c >= '0' && c <= '9') {
            angka++;
        } else if (c == '_' || c == '!' || c == '?') {
            karakter++;
        }
    }

    // Evaluasi kekuatan password
    if (besar && kecil && angka && karakter && l >= 8) {
        cout << "Kuat" << endl;
    } else if (besar + kecil > 12) {
        cout << "AgakKuat" << endl;
    } else {
        cout << "Lemah" << endl;
    }

    return 0;
}
