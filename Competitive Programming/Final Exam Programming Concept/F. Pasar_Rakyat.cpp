#include <iostream>
using namespace std;

int main() {
    int n;
    int caseTrue = 0;

    cin >> n;
    int input[n+1];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int kpk = 1;

    while (caseTrue != n){
        caseTrue = 0;
        for (int i = 0; i < n; i++) {
            if (kpk % input[i] == 0) {
                caseTrue++;
            }
        }
        kpk++;
    }

    cout << --kpk << endl;

    return 0;
}

/* 
Atau juga bisa mengunakan

#include <iostream>
#include <algorithm> // Untuk std::gcd

using namespace std;

// Fungsi untuk menghitung KPK dua angka
int lcm(int a, int b) {
    return a * b / std::gcd(a, b);
}

int main() {
    int n;
    cin >> n;

    int input[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    // Menghitung KPK seluruh angka dalam array
    int result = input[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, input[i]);
    }

    cout << result << endl;

    return 0;
}
*/
