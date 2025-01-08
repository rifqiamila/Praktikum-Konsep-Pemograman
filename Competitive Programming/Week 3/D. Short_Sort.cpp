#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string input;
        cin >> input;

        if (input == "cab" || input == "bca") {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
