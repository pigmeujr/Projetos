#include <stdio.h>

    typedef struct {
        int matricula;
        char nome[50];
        float salario_bruto;
        float desconto;
        float salario_liquido;
    } empregados;
    
    int main(){
        
        empregados empregado[80];
        empregados e;

        for (int i = 0; i < 80; i++){
            printf("Digite a matricula:");
            scanf("%d",&e.matricula);
            getchar();
            printf("Digite o nome:");
            fgets(e.nome,50,stdin);
            printf("Digite o slario bruto:");
            scanf("%f",&e.salario_bruto);
            e.desconto = e.salario_bruto*0.12;
            e.salario_liquido= e.salario_bruto-e.desconto;
            empregado[i]=e;
        }
        for (int i = 0; i < 80; i++) {
        printf("\n--- Contracheque ---\n");
        printf("Matricula: %d\n", empregado[i].matricula);
        printf("Nome: %s", empregado[i].nome);
        printf("Salario Bruto: %.2f\n", empregado[i].salario_bruto);
        printf("Deduçao INSS: %.2f\n", empregado[i].desconto);
        printf("Salario Liquido: %.2f\n", empregado[i].salario_liquido);
        }
    }