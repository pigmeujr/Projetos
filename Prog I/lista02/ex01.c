#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero maior que zero: \n");
    scanf("%d",&numero);
    if (numero%2==0){
        printf("O numero eh par");
    }
    else{
        printf("O numero eh impar");
    }
}