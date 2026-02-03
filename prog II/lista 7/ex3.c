#include <stdio.h>

    typedef struct {
        char nome[50];
        char telefone[30];
        int dia;
        int mes;
        int ano;
    } cad;
    
    int main(){

        cad cadastro[50];
        cad c;
        int j;

        for (int i = 0; i < 50; i++){
            printf("Digite seu nome:");
            fgets(c.nome,50,stdin);

            printf("Digite seu numero:");
            fgets(c.telefone,30,stdin);

            printf("Digite sua data de nascimento:");
            scanf("%d %d %d",&c.dia,&c.mes,&c.ano);
            getchar();

            cadastro[i]=c;
        }
        do{
            printf("Digite o mes(0 para sair):");
            scanf("%d",&j);
            getchar();
            
            if(j==0) break;

            int achou=0;
            for (int i = 0; i < 50; i++){
                if (cadastro[i].mes==j){
                printf("\nNome: %s", cadastro[i].nome);
                printf("Telefone: %s\n", cadastro[i].telefone);
                printf("Dia do aniversario: %d\n", cadastro[i].dia);
                achou = 1;
                }
            }
            if(!achou)
            printf("Nenhuma pessoa no mes %d\n",j);
            


        } while (j!=0);
        
        

    }