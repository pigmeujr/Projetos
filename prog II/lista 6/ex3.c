#include <stdio.h>

    int main(){

        char a[15];
        int i;

        printf("Digite seu nome:");
        fgets(a,15,stdin);
        for (i = 0; i < 4; i++) {
            if (a[i] == '\0')  // Se encontrar o fim da string, para o loop.
                break;
            printf("%c", a[i]);
        }
        
    }