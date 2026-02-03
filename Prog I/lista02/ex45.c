#include <stdio.h>

int main(){
    float peso,peso_fora;
    int numero;
    printf("Digite seu peso:");
    scanf("%f",&peso);
    printf("Digite o numero do planeta:");
    scanf("%d",&numero);
    switch (numero){
        case 1:
        peso_fora = peso*0.37;
        printf("Seu peso em Mercurio eh %.2f",peso_fora);
        break;

         case 2:
        peso_fora = peso*0.88;
        printf("Seu peso em Venus eh %.2f",peso_fora);
        break;

         case 3:
        peso_fora = peso*0.38;
        printf("Seu peso em Marte eh %.2f",peso_fora);
        break;

         case 4:
        peso_fora = peso*2.64;
        printf("Seu peso em Jupiter eh %.2f",peso_fora);
        break;

         case 5:
        peso_fora = peso*1.15;
        printf("Seu peso em Saturno eh %.2f",peso_fora);
        break;

        default:
        peso_fora = peso*1.17;
        printf("Seu peso em Urano eh %.2f",peso_fora);
        break;


    }
}