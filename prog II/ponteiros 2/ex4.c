#include <stdio.h>
#include <stdlib.h>

    int main(){

        int x,*vet;
        
        

        printf("Digite o tamanho do vetor:");
        scanf("%d",&x);

        vet = (int *) malloc(x * sizeof(int));
        if (vet == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }

        
        for (int i = 0; i < x; i++){
            printf("Digite os valores:");
            scanf("%d",(vet+i));
            if (*(vet + i) % 2 == 0){
                printf("Endereco da posicao %d (valor par): %p\n\n", i, (void*)&vet[i]);
            }
           
        }
        free(vet);
        
        return(0);

        
    }