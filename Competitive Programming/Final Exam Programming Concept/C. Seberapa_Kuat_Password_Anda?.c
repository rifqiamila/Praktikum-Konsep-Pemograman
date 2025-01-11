#include <stdio.h>
#include <string.h>

int main() {
    int besar = 0, kecil = 0, angka = 0, karakter = 0;
    char input[21];

    scanf("%s", input);

    int l = strlen(input);

    for(int i = 0; i < l; i++){
        if(input[i] >= 'A' && input[i] <= 'Z'){
            besar++;
        }
        else if(input[i] >= 'a' && input[i] <= 'z'){
            kecil++;
        }
        else if(input[i] >= '0' && input[i] <= '9'){
            angka++;
        }
        else if(input[i] == '_' || input[i] == '!' || input[i] == '?'){
            karakter++;
        }
    }

    if(besar && kecil && angka && karakter && l>=8) {
        printf("Kuat");
    }
    else if((besar+kecil) > 12) {
        printf("AgakKuat");
    }
    else{
        printf("Lemah");
    }

    return 0;
}
