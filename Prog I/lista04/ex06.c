#include <stdio.h>

int main(){
    
    int A[5],i,soma_par=0,soma_impar=0;

    printf("Digite 5 numeros:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if(A[i]%2==0){
            soma_par+=A[i];
        } else{
            soma_impar+=A[i];
        }
    }
    printf("%d\n%d",soma_par,soma_impar);
    
    
}