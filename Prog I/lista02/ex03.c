#include <stdio.h>

int main (){
    int num1,num2,soma;
    printf("Digite dois valores: ");
    scanf("%d %d",&num1,&num2);
    soma = num1+num2;
    if (soma>10){
        printf("O resultado eh %d",soma);
    }
    else{
        return 0;
    }
}