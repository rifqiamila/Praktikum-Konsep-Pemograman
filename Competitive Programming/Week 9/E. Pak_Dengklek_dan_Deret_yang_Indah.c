#include <stdio.h>

int main() {
    int a, n, b;
    // a -> suku pertama, n -> suku ke-, b -> beda

    scanf("%d %d %d", &a, &n, &b);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", a);
        a = a + b;
    }

    return 0;
}
