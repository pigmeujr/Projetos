#include <stdio.h>
#include <stdlib.h>

    int main(){

        FILE* arquivo;
        arquivo = fopen("inputs_float_lista8_p2.txt","r");

        int linhas=5,colunas=50;
        float **mat1,**mat2,**mat3;

        mat1 = malloc(linhas * sizeof(float *));
        if (mat1 == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        for (int i = 0; i < linhas ; i++){
           mat1[i] =  malloc(colunas * sizeof(float));
           if (mat1[i] == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        }

        mat2 = malloc(linhas * sizeof(float *));
        if (mat2 == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        for (int i = 0; i < linhas ; i++){
           mat2[i] =  malloc(colunas * sizeof(float));
           if (mat2[i] == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        }
        
        mat3 = malloc(linhas * sizeof(float *));
        if (mat3 == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        for (int i = 0; i < linhas ; i++){
           mat3[i] =  malloc(colunas * sizeof(float));
           if (mat3[i] == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
        }
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo\n");
            return 1;
        }


        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                fscanf(arquivo, "%f", &mat1[i][j]);
            }
        }

        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                fscanf(arquivo, "%f", &mat2[i][j]);
            }
        }
        
        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        printf("Matriz soma:\n");
        for (int i = 0; i < linhas; i++) {
            printf("| ");
            for (int j = 0; j < colunas; j++) {
                printf("%7.2f | ", mat3[i][j]);
            }
            printf("\n");
        }


        for (int i = 0; i < linhas; i++){ 
            free(mat1[i]);
        }
        free(mat1);

        for (int i = 0; i < linhas; i++){ 
            free(mat2[i]);
        }
        free(mat2);

        for (int i = 0; i < linhas; i++){ 
            free(mat3[i]);
        }
        free(mat3);

        fclose(arquivo);
        return(0);
        
    }