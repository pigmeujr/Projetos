#include <stdio.h>

int main (){
    int num1,num2,num3,num4,num5,negativo = 0;
    printf("Digite cinco numeros: ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    if (num1<0) negativo++;
    if (num2<0) negativo++;
    if (num3<0) negativo++;
    if (num4<0) negativo++;
    if (num5<0) negativo++;
    printf("Existem %d numeros negativos",negativo);
}