#include <stdio.h>

int calculadora(int num1, int num2, char simbolo){
    int resultado;
    if (simbolo=='+'){
        resultado=num1+num2;
    } else if (simbolo =='-'){
        resultado=num1-num2;
    } else if (simbolo=='/'){
        resultado=num1/num2;
    } else{
        resultado=num1*num2;
    }
    return resultado;
}

    int main(){

        int x,y;
        char s;

        printf("Digite dois valores:");
        scanf("%d %d",&x,&y);

        printf("Digite algum simbolo matematico:");
        scanf(" %c",&s);

        printf("%d",calculadora(x,y,s));
    }