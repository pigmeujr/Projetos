#include <stdio.h>

    int dobro(int x){
        return x*2;
    }

    int main(){
        int x,resultado;
        printf("Digite um numero:");
        scanf("%d",&x);
        resultado= dobro(x);
        printf("Dobro: %d",resultado);
    }