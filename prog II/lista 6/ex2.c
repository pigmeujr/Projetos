#include <stdio.h>

    int main(){

        char nome[20];

        printf("Digite seu nome:");
        fgets(nome,20,stdin);

        if (nome[0]=='a' || nome[0]=='A'){
            printf("%s",nome);
        }
        
        
    }