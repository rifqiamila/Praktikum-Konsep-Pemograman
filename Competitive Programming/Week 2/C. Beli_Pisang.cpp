#include <iostream>
using namespace std;

int main() {
    unsigned int k, n, w, total_cost, borrow;

    cin >> k >> n >> w;

    // Mengubah kompleksitas menjadi O(1) tanpa looping
    total_cost = k * w * (w + 1) / 2;

    if (total_cost <= n) {
        borrow = 0;
    } else {
        borrow = total_cost - n;
    }

    cout << borrow << endl;

    return 0;
}
