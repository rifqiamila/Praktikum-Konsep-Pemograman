#include <iostream>
using namespace std;

int main() {
    int a, n, b;
    // a -> suku pertama, n -> suku ke-, b -> beda

    cin >> a >> n >> b;
    for (int i = 1; i <= n; i++) {
        cout << a << endl;
        a = a + b;
    }

    return 0;
}
