#include <stdio.h>

int main(){
    float valor,valor_prestacao;
    int prestacao;
    printf("Digite o valor do produto:");
    scanf("%f",&valor);
    printf("Digite em quantas prestaçoes:");
    scanf("%d",&prestacao);
        if (prestacao >= 1 && prestacao <= 3) {
        valor_prestacao = valor;
    } else if (prestacao >= 4 && prestacao <= 7) {
        valor_prestacao = valor * 1.005;
    } else if (prestacao >= 8 && prestacao <= 12) {
        valor_prestacao = valor * 1.015;
    } else if (prestacao >= 13 && prestacao <= 20) {
        valor_prestacao = valor * 1.03;
    }
    printf("O valor final a ser pago pelo produto e: R$ %.2f\n", valor_prestacao);
}