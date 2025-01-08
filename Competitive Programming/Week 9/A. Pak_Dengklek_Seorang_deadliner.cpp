#include <iostream>
using namespace std;

int main() {
    int N, jam, menit, detik;
    cin >> N;

    jam = N / 3600;
    menit = (N % 3600) / 60;
    detik = N % 60;

    cout << jam << endl << menit << endl << detik;
    
    return 0;
}
