#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    int A[N + 1];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = N-1; i >= 0; i--) {
        printf("%d", A[i]);
        if (i >= 1)
        printf(",");
    }

    return 0;
}
