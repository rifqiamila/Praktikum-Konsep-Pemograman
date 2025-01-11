#include <iostream>
using namespace std;

int main() {
    int N, H;
    int secondJump = 1000000;
    int jauh_lompatan;
    cin >> N >> H;

    int J[N+1];
    int lompatan_terjauh = 0;

    for (int i = 0; i < N; i++) {
        cin >> J[i];
        if (J[i] > lompatan_terjauh) {
            lompatan_terjauh = J[i]; // Update lompatan maksimum
        }
    }

    for (int i = 0; i < N; i++) {
        jauh_lompatan = J[i] + lompatan_terjauh;
        if (jauh_lompatan >= H && J[i] < secondJump) {
            secondJump = J[i];
        }
    }

    jauh_lompatan = secondJump + lompatan_terjauh;
    cout << jauh_lompatan << endl;

    return 0;
}
