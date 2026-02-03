#include <stdio.h>
#include <stdlib.h>

    int main(){

        int x,*vet;

        printf("Digite o tamanho do vetor:");
        scanf("%d",&x);
        if (x>1000){
            printf("Valor não suportado!");
            return(1);
        }

        vet = (int *) malloc(x * sizeof(int));
        if (vet == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }

        for (int i = 0; i < x; i++){
            printf("Digite os valores:");
            scanf("%d",&*(vet+i));
            *(vet+i)*=2;
        }
        free(vet);
       

        
        return(0);
        
    }