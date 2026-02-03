#include <stdio.h>

    int main(){

        FILE* arquivo;
        arquivo = fopen("dados.txt","w");
        char nome[50];
        int idade;

        if (arquivo==NULL){
            printf("Erro");
            return(1);
        }
        
        printf("Digite seu nome e sua idade:");
        scanf("%s %d",nome,&idade);

        fprintf(arquivo, "Nome: %s\nIdade: %d",nome,idade);

        fclose(arquivo);
        return(0);
        
    }