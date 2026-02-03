#include <stdio.h>

    int main(){

        int S[6][6],i,j,V[36],A,k=0;

        printf("Digite o valor para multiplicar a matriz:");
        scanf("%d",&A);

        for (i = 0; i < 6; i++){
            for (j = 0; j < 6; j++){
                printf("Digite os valores para a matriz:");
                scanf("%d", &S[i][j]);
            }
        }
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 6; j++) {
                V[k] = S[i][j] * A;
                k++;
            }
        }
        printf("\nVetor resultante (matriz multiplicada por %d):\n", A);
        for (i = 0; i < 36; i++) {
        printf("%d\n", V[i]);
        }
}