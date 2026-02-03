#include <stdio.h>

int main(){
    float n1,n2,resultado;
    int operador;
    printf("Digite dois numeros:");
    scanf("%f %f",&n1,&n2);
    printf("Digite 1, 2, 3 ou 4 para escolher um operdor:");
    scanf("%d",&operador);
    switch (operador){
        case 1:
        resultado = n1+n2;
        printf("A soma eh %.2f",resultado);
        break;
        case 2:
        resultado = n1-n2;
        printf("A subtracao eh %.2f",resultado);
        break;
        case 3:
        resultado = n1/n2;
        printf("A divisao eh %.2f",resultado);
        break;
        default:
        resultado = n1*n2;
        printf("A multiplicacao eh %.2f",resultado);
    }


}