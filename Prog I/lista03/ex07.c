#include <stdio.h>

int main(){
    int i,valor,maior=-1,menor=9999;
    while (i<50){
        printf("Digite o numero ");
        scanf("%d",&valor);
        if(valor>maior)
        maior=valor;
        if(valor<menor)
        menor=valor;
        i++;
    }
    printf("O maior valor eh %d e o menor eh %d",maior,menor);
    
}