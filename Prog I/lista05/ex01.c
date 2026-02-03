#include <stdio.h>

int main(){
    int S[6][6],A,V[36],i,j,k=0;

    printf("Digite 36 valores:");
    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            scanf("%d",&S[i][j]);
        }
    }

    printf("Digite 1 vlaor para multiplicar");
    scanf("%d",&A);

    for (i = 0; i < 6; i++){
        for (j = 0; j <6; j++){
            V[k++]= S[i][j]*A;
        }
    }
    printf("Vetor V[36]:\n");
    for (int i = 0; i < 36; i++) {
        printf("%d ", V[i]);
    }
}