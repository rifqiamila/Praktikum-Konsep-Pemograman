#include <stdio.h>

int main() {
    int x, aCount = 0, bCount = 0;
    char input[6];

    scanf("%d", &x);

    while (x--) {
        scanf("%s", input);
        for(int j =0; j < 5; j++) {
            if(input[j]=='A') {
                aCount++;
            }
            else{
                bCount++;
            }
        }

        printf("%c\n", aCount > bCount ? 'A' : 'B');

        aCount = 0;
        bCount = 0;
    }

    return 0;
}
