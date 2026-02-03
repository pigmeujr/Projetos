#include <stdio.h>

int main(){
    int numero;
    float altura,maior_altura=-1,menor_altura=230;
    while(numero<5){
        printf("Digite o numero do aluno:");
        scanf("%d",&numero);
        printf("Digite a altura do aluno");
        scanf("%f",&altura);
        if(altura>maior_altura){
            maior_altura=altura;
        }
        if(altura<menor_altura){
            menor_altura=altura;
        }
    }
    printf("\n%.02f",maior_altura);
    printf("\n%.02f",menor_altura);
}
