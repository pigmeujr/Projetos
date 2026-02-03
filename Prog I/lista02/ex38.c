#include <stdio.h>

int main(){
    int codigo,quantidade;
    float total;
    printf("Digite o codigo do produto:");
    scanf("%d",&codigo);
    printf("Digite a quantidade vendida:");
    scanf("%d",&quantidade);
    switch (codigo){
        case 1001:
        total = quantidade*5.32;
        printf("O preço total eh %.2f",total);
        break;

        case 1324:
        total = quantidade*6.45;
        printf("O preço total eh %.2f",total);
        break;

        case 6548:
        total = quantidade*2.37;
        printf("O preço total eh %.2f",total);
        break;

        case 987:
        total = quantidade*5.32;
        printf("O preço total eh %.2f",total);
        break;

        case 7623:
        total = quantidade*6.45;
        printf("O preço total eh %.2f",total);
        break;

        default:
        printf("Codigo invalido");
        break;
    }
}