#include <stdio.h>

int main () {
    int limak, bob, years;

    scanf("%d", &limak);
    scanf("%d", &bob);
    
    years = 0;
    while (bob >= limak) {
        limak = limak * 3;
        bob = bob * 2;
        years++;
    }
    
    printf("%d\n", years);

    return 0;
}
