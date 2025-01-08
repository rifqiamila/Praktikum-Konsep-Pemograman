#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;
    if (N >= 0 && N <= 100) {
        cout << "YA";
    }
    else {
        cout << "TIDAK";
    }
    
    return 0;
}
