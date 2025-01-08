#include <stdio.h>

int main () {
    int N, jam, menit, detik;
    scanf("%d", &N);

    jam = N / 3600;
    menit = (N - (jam * 3600)) / 60;
    detik = N - (menit * 60) - (jam * 3600);
    printf("%d\n", jam);
    printf("%d\n", menit);
    printf("%d\n", detik);
    
    return 0;
}
