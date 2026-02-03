#include <stdio.h>

    int main(){

        char t[20];
        int i,qtd=0;

        printf("Digite uma string:");
        fgets(t,20,stdin);
        for (i = 0; t[i] != '\0'; i++) {
            if (t[i] == '\n') {
                t[i] = '\0';
                break;
            }
            if(t[i]!='\0'){
                qtd++;
            }
        }
        printf("Tem %d no string",qtd);
    }