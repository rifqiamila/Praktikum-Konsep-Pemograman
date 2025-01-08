#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    if (N > 100 || N < 0) {
        printf("TIDAK");
    }
    else {
        printf("YA");
    }

    return 0;
}
