#include <stdio.h>

int main() {
    float salario,prestacao;
    printf("Digite o valor do seu salario: ");
    scanf("%f",&salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f",&prestacao);
        if (prestacao>(salario*130)/100){
            printf("O emprestimo nao pode ser realizado");
        }else{
            printf("O emprestimo opde ser realizado");
        }
    
}