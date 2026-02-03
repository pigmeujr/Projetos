#include <stdio.h>

int main(){
    int V[25],x,i,posicao=-1,contagem=0;

    printf("Digite 25 valores:");
    for ( i = 0; i < 25; i++)
    {
        scanf("%d",&V[i]);
    }
    printf("Digite o valor de x:");
    scanf("%d",&x);
    for ( i = 0; i < 25; i++)
    {
        if(V[i]==x){
            if(posicao==-1){
                posicao=i;
            }
            contagem++;
        }
    }
    if (posicao != -1) {
        printf("Primeira ocorrência de %d encontrada na posição: %d\n", x,posicao);
        printf("Número total de ocorrências de %d: %d\n", x, contagem);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", x);
    }
    
    
}