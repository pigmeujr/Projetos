#include <stdio.h>

int main(){

    int N[20],menor,posicao,i;

    printf("Digite 20 numeros:");
    for (i = 0; i < 20; i++){
        scanf("%d",&N[i]);
    }
    menor =N[0];
    posicao = 0;
    for (i = 0; i < 20; i++){
        if(N[i]<menor){
            menor=N[i];
            posicao=i;
        }
    }
    printf("O menor elemento de N eh: %d e sua posicao eh: %d",menor,posicao);
    
}