#include <stdio.h>

int somatorio(int num){
    int digito,soma=0;
    while (num>0){
        digito=num%10;
        soma+=digito;
        num=num/10;
    }
    return soma;
}

    int main(){
        int x;

        printf("Digite um numero:");
        scanf("%d",&x);

        printf("O somatorio eh %d",somatorio(x));
    }