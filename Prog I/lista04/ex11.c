#include <stdio.h>

int main(){
    int A[10],B[10],i,j,C[10],k=0;

    printf("Digite 10 numeros:");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Digite 10 numeros:");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&B[i]);
    }
    for (i = 0; i < 10; i++){
        for ( j =0; j < 10; j++){
            if(A[i]==B[j]){ 
            C[k] =A[i];
            k++;
            }
        }
    }
    printf("\nVetor C (interseção de A e B):\n");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
}