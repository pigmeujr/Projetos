#include <stdio.h>

int main(){
    float valor,prestacao;
    printf("Digite o valor da compra:");
    scanf("%f",&valor);
    if (valor<=500){
        prestacao = valor/5;
        printf("Cada prestacao fica R$ %.2f",prestacao);
    }else{
        prestacao = valor/8;
        printf("Cada prestacao fica R$ %.2f",prestacao);
    }
}