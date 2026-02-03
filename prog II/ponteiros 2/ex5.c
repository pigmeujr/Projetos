#include <stdio.h>
#include <stdlib.h>

    int main(){

        int A, *B, **C, ***D;

        printf("Digite um valor:");
        scanf("%d",&A);

        B=&A;
        C=&B;
        D=&C;
        

        printf("Dobro:%d\nTriplo:%d\nQuadruplo:%d\n",(*B)*2,(**C)*3,(***D)*4);
        
        return(0);

        
    }