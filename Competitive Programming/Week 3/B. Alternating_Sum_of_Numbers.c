#include <stdio.h>

int main () {
    int t, n, a;

    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);
        int total = 0;
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a);
            if (j % 2 == 0) {
                total -= a;
            }
            else {
                total += a;
            }

        }
        printf("%d\n", total);
    }

    return 0;
}
