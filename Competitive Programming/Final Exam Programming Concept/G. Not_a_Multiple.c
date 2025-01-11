#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    for (int i = 2; i <= 100; i++) {
        if(i % a != 0 && i % b != 0 && i % c != 0) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
