#include <stdio.h>

int main(){
    int n,soma=0,qtd=0;
    float media;
    printf("Digite os numeros ");
    scanf("%d",&n);
    while (n!=0){
        if(n%2==0){
        soma+=n; 
        qtd++;}
        
        scanf("%d",&n);
    }
    if(qtd>0){
        media=soma/qtd;
        printf("A media eh %f",media);
    }
    
}