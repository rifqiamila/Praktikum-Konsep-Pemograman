#include <stdio.h>

int main () {
    int t;
    char input[4];

    scanf("%d", &t);
    
    for (int i = 1; i <= t; i++) {
        scanf("%s", &input);
        if(input[0] == 'c' && input[1] == 'a' && input[2] == 'b') {
            printf("NO\n");
        }
        else if (input[0] == 'b' && input[1] == 'c' && input[2] == 'a') {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }

    return 0;
}
