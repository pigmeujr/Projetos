#include <stdio.h>

    typedef struct {
            char nome[50];
            int idade;
        } pessoa;

    int main(){

        
        pessoa pessoas[3];
        pessoa p;
        for(int i = 0; i < 3; i++) {
        printf("Digite nome e idade da pessoa: ");
        scanf("%s %d", p.nome, &p.idade);
        pessoas[i]=p;
        }

        FILE* arquivo = fopen("pessoas.bin", "wb");
        if(arquivo==NULL){
            printf("Erro");
            return(1);
        }
        fwrite(pessoas, sizeof(pessoa), 3, arquivo);
        
        fclose(arquivo);
        
    }