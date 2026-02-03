#include <stdio.h>

int main () {
    int pessoas;
    float valor_conta,gorjeta,valor_racha;
    printf("Digite o numero de pessoas \n");
    scanf("%d",&pessoas);
    printf("Digite o valor da conta \n");
    scanf("%f",&valor_conta);
    printf("Gorgeta \n");
    scanf("%f",&gorjeta);
    gorjeta = valor_conta *( 1+(gorjeta/100));
    valor_racha = gorjeta/pessoas;
    printf("O valor para cada pessoa eh %f",valor_racha);

}