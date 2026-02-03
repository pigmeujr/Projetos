#include <stdio.h>

int main(){
    char h,m,opcao;
    float peso_ideal,altura;
    printf("Digite h p/ homem e m p/ mulher:");
    scanf(" %c",&opcao);
    printf("Digite sua altura:");
    scanf("%f",&altura);
    switch (opcao){
        case 'h':
        peso_ideal=(72.7*altura)-58;
        printf("O seu peso ideal eh %.2f",peso_ideal);
        break;
        default:
        peso_ideal=(62.1*altura)-44.7;
        printf("O seu peso ideal eh %.2f",peso_ideal);
    }
}