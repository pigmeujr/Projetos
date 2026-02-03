#include <stdio.h>
#include <stdlib.h>

    int main(){

        FILE* arquivo;
        arquivo = fopen("inputs_int_lista8_p2.txt","r");

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
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo\n");
            free(vet);
            return 1;
        }

        for (int i = 0; i < x; i++){
            fscanf(arquivo,"%d",(vet+i));
            *(vet+i)*=2;
            printf("%d\n", *(vet + i));
        }
        free(vet);
        fclose(arquivo);

        
        return(0);
        
    }