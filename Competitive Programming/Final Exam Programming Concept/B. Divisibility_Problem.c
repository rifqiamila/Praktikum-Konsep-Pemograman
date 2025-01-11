#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        if (a % b == 0) {
            printf("0\n");
        } 
        else {
            long long moves = b - (a % b);
            printf("%lld\n", moves);
        }
    }

    return 0;
}
