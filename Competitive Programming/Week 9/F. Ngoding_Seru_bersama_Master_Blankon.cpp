#include <iostream>
using namespace std;

int main() {
    int t;
    int int1, int2, int3;

    cin >> int1 >> int2 >> int3;
    cin >> t;

    if (int1 > int2) {
        int temp = int1;
        int1 = int2;
        int2 = temp;
    }
    if (int2 > int3) {
        int temp = int2;
        int2 = int3;
        int3 = temp;
    }
    if (int1 > int2) {
        int temp = int1;
        int1 = int2;
        int2 = temp;
    }

    if (t == 0) {
        cout << int3 << " " << int2 << " " << int1 << endl; // Descending
    } else {
        cout << int1 << " " << int2 << " " << int3 << endl; // Ascending
    }

    return 0;
}
