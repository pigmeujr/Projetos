#include <stdio.h>

    typedef struct {
    char nome[50];
    int idade;
    } pessoa;

    int main(){
        pessoa pessoas[3];

        FILE* arquivo =fopen("pessoas.bin","rb");
        if(arquivo==NULL){
            printf("Erro");
            return(1);
        }
        
        fread(pessoas,sizeof(pessoa),3,arquivo);
        fclose(arquivo);

       for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("--------------------\n");
        }
    }