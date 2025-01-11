#include <stdio.h>

int main() {
    int n;
    int caseTrue = 0;

    scanf("%d", &n);
    int input[n+1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }
    
    int kpk = 1;

    while (caseTrue != n){
        caseTrue = 0;
        for (int i = 0; i < n; i++) {
            if (kpk % input[i] == 0) {
                caseTrue++;
            }
        }
        kpk++;
    }

    printf("%d", kpk - 1);

    return 0;
}
