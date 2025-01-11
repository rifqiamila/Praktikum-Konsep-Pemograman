#include <stdio.h>

int main() {
    int N, H;
    int secondJump = 1000000;
    int jauh_lompatan;
    scanf("%d %d", &N, &H);

    int J[N+1];
    int lompatan_terjauh = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &J[i]);
        if (J[i] > lompatan_terjauh) {
            lompatan_terjauh = J[i]; // Update lompatan maksimum
        }
    }

    for (int i = 0; i < N; i++) {
        jauh_lompatan = J[i] + lompatan_terjauh;
        if (jauh_lompatan >= H && J[i] < secondJump) {
            secondJump = J[i];
        }
    }

    jauh_lompatan = secondJump + lompatan_terjauh;
    printf("%d\n", jauh_lompatan);

    return 0;
}
