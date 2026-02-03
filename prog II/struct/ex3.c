#include <stdio.h>

    int main(){

        int mes=1;
        typedef struct {
            char nome[50];
            char telefone[30];
            struct {
                int dia;
                int mes;
                int ano;
            }nasc;
        } dados;

        dados d[50];

        for (int i = 0; i < 2; i++){
            printf("Digite o nome da pessoa:");
            fgets(d[i].nome,50,stdin);
            for (int j = 0; j < 50; j++) {
                if (d[i].nome[j] == '\n') {
                    d[i].nome[j] = '\0';
                    break;
                }
            }
            printf("Digite o numero de telefone:");
            fgets(d[i].telefone,30,stdin);
            for (int k = 0; k < 30; k++) {
                if (d[i].telefone[k] == '\n') {
                    d[i].telefone[k] = '\0';
                    break;
                }
            }
            printf("Digite a data de nascimento:");
            scanf("%d %d %d",&d[i].nasc.dia,&d[i].nasc.mes,&d[i].nasc.ano);
            getchar();
        }
        
            while (mes!=0){
                printf("Digite um mes:");
                scanf("%d",&mes);
                if (mes==0){
                    printf("Saindo...");
                    break;
                } 
                int achou=0;
                
                for (int i = 0; i < 2; i++){
                    if (mes==d[i].nasc.mes){
                        printf("Nome:%s\nTelefone:%s\nDia do aniversario:%d\n",d[i].nome,d[i].telefone,d[i].nasc.dia);
                        achou=1;
                    }
                }
                if (achou==0){
                    printf("Ninguem faz aniversario esse mes\n\n");
                }
                
            }
            return(0);
}