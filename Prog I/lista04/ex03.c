#include <stdio.h>

int main(){
    int A[10],i;

    printf("Digite 10 numeros:");
    for (i = 0; i < 10; i++){
        scanf("%d",&A[i]);
    }

    for (i = 0; i <10; i++)
    {
        if(A[i]<=10){ 
        printf("Posicao %d: %d\n",i,A[i]);
        }
    }
    
    
}