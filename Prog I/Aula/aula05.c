#include <stdio.h>

int main(){
    int n=1,contapar=0,somapar=0;
    float media;
    while (n<=5555){
        if(n%2==0){
            printf("%d\n",n);
            contapar+=1;
            somapar+=n;
        }
        n++;
    }
    printf("\n%d",contapar);
    printf("\n%d",somapar);
    media = somapar/contapar;
    printf("\n%f",media);

    
    
}