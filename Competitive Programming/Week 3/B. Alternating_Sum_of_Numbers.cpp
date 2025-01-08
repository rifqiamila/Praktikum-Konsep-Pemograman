#include <iostream>
using namespace std;

int main () {
    int t, n, a;

    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;

        int total = 0;
        for (int j = 1; j <= n; j++) {
            cin >> a;
            if (j % 2 == 0) {
                total -= a;
            }
            else {
                total += a;
            }

        }
        cout << total << endl;
    }

    return 0;
}
