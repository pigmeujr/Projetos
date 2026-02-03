#include <stdio.h>
#include <stdlib.h>

    int main(){

        int linhas,colunas;
        float **mat;

        printf("Digite o tamanho da matriz:");
        scanf("%d %d",&linhas,&colunas);

        mat = malloc(linhas * sizeof(float *));
        if (mat == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        for (int i = 0; i < linhas ; i++){
           mat[i] =  malloc(colunas * sizeof(float));
           if (mat[i] == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        }
        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                mat[i][j] = i * j;
                printf("Endereco da posicao %d %d: %p\n", i,j, (void*)&mat[i][j]);
            }
        }
        
        for (int i = 0; i < linhas; i++){ 
            free(mat[i]);
        }
        free(mat);
       

        
        return(0);
        
    }