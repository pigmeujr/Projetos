#include <stdio.h>

int main(){
    float valor1,valor2,valor3,premio,premio1,premio2,premio3;
    printf("Digite o valor das apostas:");
    scanf("%f %f %f",&valor1,&valor2,&valor3);
    printf("Digite o valor do premio:");
    scanf("%f",&premio);
    premio1 = (valor1*100)/premio;
    premio2 = (valor2*100)/premio1;
    premio3 = (valor3*100)/premio2;
    printf("Ganhador 1:%f \nGanhador 2:%f \nGanhador 3:%f",premio1,premio2,premio3);
}