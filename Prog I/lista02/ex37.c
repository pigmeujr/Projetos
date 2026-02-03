#include <stdio.h>

int main(){
    float base,altura,lado1,lado2,base_maior,area;
    char escolha;
    printf("Digite q, r, t ou p:");
    scanf("%c",&escolha);
    switch (escolha){
        case 'q':
        printf("Digite o lado:");
        scanf("%f",&lado1);
        area = lado1*lado1;
        printf("A area do quarado eh %.2f",area);
        break;

        case 't':
        printf("Digite a base e altura:");
        scanf("%f %f",&base,&altura);
        area =(base*altura)/2;
        printf("A area do triangulo eh %.2f",area);
        break;

        case 'r':
        printf("Digite a base e altura:");
        scanf("%f %f",&base,&altura);
        area = base*altura;
        printf("A area do retangulo eh %.2f",area);
        break;

        default:
        printf("Digite a base menor, a base maior e altura:");
        scanf("%f %f %f",&base,&base_maior,&altura);
        area = ((base+base_maior)*altura)/2;
        printf("A area do trapezio eh %.2f",area);
        break;
    }
}