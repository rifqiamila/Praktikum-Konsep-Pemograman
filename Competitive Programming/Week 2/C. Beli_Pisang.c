#include <stdio.h>

int main () {
    unsigned int k ,n , w, borrow;

    scanf("%d %d %d", &k, &n, &w); 

    borrow = 0;
    for (int i = 1; i <= w; i++) {
        k = k * i;
        borrow = borrow + k;
        k = k / i;
    }

    if (borrow <= n) {
        printf("%d\n", 0);
    }
    else {
        printf("%d\n", borrow - n);
    }

    return 0;
}

/* w = bananas
   k = has to pay (dollars)
   n = has n dollars
*/
