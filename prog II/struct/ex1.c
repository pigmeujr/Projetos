#include <stdio.h>

    int main(){

        typedef struct {
            int matricula;
            char nome[50];
            float salario;
            float inss;
            float salario_final;
        }contracheque;

        contracheque c [80];

        for (int i = 0; i < 80; i++){
            printf("Digite a matricula do funcionario:");
            scanf("%d",&c[i].matricula);
            getchar();
            printf("Digite o nome do funcionario:");
            fgets(c[i].nome,50,stdin);
            for (int j = 0; j < 50; j++) {
                if (c[i].nome[j] == '\n') {
                    c[i].nome[j] = '\0';
                    break;
                }
            }
            printf("Digite o salario do funcionario:");
            scanf("%f",&c[i].salario);

            c[i].inss=c[i].salario*0.12;
            c[i].salario_final=c[i].salario-c[i].inss;

            printf("Matricula:%d\nNome:%s\nSalario:%.2f\nINSS:%.2f\nSalario liquido:%.2f\n",c[i].matricula,c[i].nome,c[i].salario,c[i].inss,c[i].salario_final);

        }
        
        return(0);
        
    }