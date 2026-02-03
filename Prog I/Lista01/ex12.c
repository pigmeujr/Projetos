#include <stdio.h>

int main(){
    int valor,nota_50,nota_20,nota_10,entregue,resto;
    printf("Digite o valor a ser sacado \n");
    scanf("%d",&valor);
    nota_50 = valor/50;
    valor = valor%50;
    nota_20 = valor/20;
    valor = valor%20;
    nota_10 = valor/10;
    valor = valor%10;
    resto = valor;
    entregue = (nota_50*50)+(nota_20*20)+(nota_10*10);
    printf("Notas de R$ 50: %d\n",nota_50);
    printf("Notas de R$ 20: %d\n",nota_20);
    printf("Notas de R$ 10: %d\n",nota_10);
    printf("Total entregue: R$%d\n", entregue);
    printf("Restante (não entregue): R$%d\n", resto);

}