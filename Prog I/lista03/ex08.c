#include <stdio.h>

int main(){
    int n,valor,i,maior=-1,menor=999,soma=0;
    float media;
    printf("Digite quantos numeros ");
    scanf("%d",&n);
    if(n<3){ 
    printf("Erro");}
    while (i>n){
        printf("Digite o numero ");
        scanf("%d",&valor);
        if(valor>maior)
        maior=valor;
        if(valor<menor)
        menor=valor;
        valor+=soma;

    }
    
}