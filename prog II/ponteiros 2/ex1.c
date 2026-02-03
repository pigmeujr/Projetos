#include <stdio.h>
#include <stdlib.h>

    int main(){

        int x;
        float *vet;
        

        printf("Digite o tamanho do vetor:");
        scanf("%d",&x);

        vet = (float *) malloc(x * sizeof(float));
        if (vet == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }

        
        for (int i = 0; i < x; i++){
            vet[i]=i;
            printf("Endereco da posicao %d: %p\n", i, (void*)&vet[i]);
        }
        free(vet);
        
        return(0);

        
    }