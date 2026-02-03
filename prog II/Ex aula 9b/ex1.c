#include <stdio.h>

    typedef struct {
            char nome[50];
            int idade;
        } pessoa;

    int main(){
        FILE* arquivo = fopen("usuario.bin", "wb");
        if(arquivo==NULL){
            printf("Erro");
            return(1);
        }
        
        pessoa p;
        printf("Digite seu nome e idade:");
        scanf("%s %d",p.nome,&p.idade);

        fwrite(&p, sizeof(pessoa),1,arquivo);

        fclose(arquivo);

        arquivo = fopen("usuario.bin","rb");
        if(arquivo==NULL){
            printf("Erro");
            return(1);
        }
        pessoa pLido;
        fread(&pLido, sizeof(pessoa),1,arquivo);
        printf("Nome: %s\nIdade: %d",pLido.nome,pLido.idade);
    }