#include <stdio.h>

int main() {
    int K;
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    scanf("%d", &K);

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    if (K == 0) {
        printf("%d %d %d\n", C, B, A); // Descending
    } else {
        printf("%d %d %d\n", A, B, C); // Ascending
    }

    return 0;
}
