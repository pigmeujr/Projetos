#include <stdio.h>

int main(){
    float saldo,credito;
    printf("Digite seu saldo medio:");
    scanf("%f",&saldo);
    if (saldo>=0 && saldo<=200){
        printf("Saldo medio: R$%.2f \nValor do credito: Nenhum credito",saldo);
    } else if (saldo>=200.01 && saldo<=400){
        credito = saldo*1.20;
        printf("Saldo medio: R$%f \nValor do credito: R$%.2f",saldo,credito);
    } else if (saldo>=401 && saldo<=600){
        credito = saldo*1.30;
        printf("Saldo medio: R$%.2f \nValor do credito: R$%.2f",saldo,credito);
    }else{
        credito = saldo*1.40;
        printf("Saldo medio: R$%.2f \nValor do credito: R$%.2f",saldo,credito);
    }
}