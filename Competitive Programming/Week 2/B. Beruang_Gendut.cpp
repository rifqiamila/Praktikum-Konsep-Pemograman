#include <iostream>
using namespace std;

int main () {
    int limak, bob, years;

    cin >> limak >> bob;

    years = 0;
    while (bob >= limak) {
        limak = limak * 3;
        bob = bob * 2;
        years++;
    }
    
    cout << years << endl;

    return 0;
}
