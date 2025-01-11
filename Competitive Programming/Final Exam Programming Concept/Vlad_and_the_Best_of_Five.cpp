#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, aCount, bCount;
    string input;

    cin >> x;

    while (x--) {
        cin >> input;
        aCount = 0;
        bCount = 0;

        for (char c : input) {
            if (c == 'A') {
                aCount++;
            } else {
                bCount++;
            }
        }

        cout << (aCount > bCount ? 'A' : 'B') << endl;
    }

    return 0;
}
