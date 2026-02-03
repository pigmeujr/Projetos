#include <stdio.h>

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    if (x > -10 && x < 30){
        printf("O valor pertence ao intervalo");
    }
    else{
        printf("O valor nao pertence ao intervalo");
    }

}