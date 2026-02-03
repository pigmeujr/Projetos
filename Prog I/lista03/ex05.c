#include <stdio.h>

int main(){
    int n,qtd=0;
    float media,soma=0;
    printf("Digite o valor da nota");
    scanf("%d",&n);
    while (n>=0){
        soma+=n;
        qtd++;
        scanf("%d",&n);
    }
    if(qtd>0){
        media=soma/qtd;
        printf("A media eh %f",media);
    }
    
}