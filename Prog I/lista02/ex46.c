#include <stdio.h>

int main(){
    int numero,resto,divisao,resultado;
    printf("Digite um numero de quatro digitos:");
    scanf("%d",&numero);
    divisao = numero/100;
    resto = numero%100;
    resultado = divisao+resto;
    if (resultado*resultado==numero){
        printf("Possui a caracteristica");
    }else{
        printf("Nao possui");
    }
}