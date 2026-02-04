#include <stdio.h>
#include <stdlib.h>

    int main(){

        int **mat,linhas=3,colunas=3;
        char resp;
        int i,j;
        
        mat = malloc(linhas * sizeof(int *));
        if (mat == NULL) {
                printf("Erro ao alocar memoria\n");
                return 1;
            }
        for (int i = 0; i < linhas; i++){
            mat[i] = malloc(colunas * sizeof(int));
            if (mat[i] == NULL) {
                printf("Erro ao alocar memoria\n");
                return 1;
            }
        }

        for (i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                printf("Digite os numeros:");
                scanf("%d",&mat[i][j]);
            }
        }
        printf("Quer adicionar colunas? 's' ou 'n'");
        scanf(" %c", &resp);

        while (resp == 's' || resp == 'S'){
            colunas++;
            for (i = 0; i < linhas; i++){
                int *tmp = realloc(mat[i], colunas * sizeof(int));
                if (tmp == NULL){
                printf("Erro ao alocar memoria\n");
                return 1;
            } else{
                mat[i]=tmp;
            }
            }
            for (i = 0; i < linhas; i++){
                printf("Digite o valor da nova coluna na linha %d: ", i);
                scanf("%d", &mat[i][colunas-1]);
            }
            
            printf("Quer adicionar colunas? 's' ou 'n'");
            scanf(" %c", &resp);
        }

        for (i = 0; i < linhas; i++){
            for (j = 0; j < colunas; j++){
                printf("%5d",mat[i][j]);
            }
            printf("\n");
        }
        
        for (i = 0; i < linhas; i++){
            free(mat[i]);
        }
        free(mat);

        
        
        return(0);
        
    }