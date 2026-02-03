#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome_entrada[100];
    char nome_saida[100];
    int linhas;
    int colunas;
    int geracoes;
    int **matriz;
} Tabuleiro;

void entrada(char *entrada, char *saida) {
    printf("Digite o nome de arquivo de entrada: ");
    fgets(entrada, 100, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    strcpy(saida, entrada);
    char *ponto = strrchr(saida, '.');
    if (ponto != NULL) *ponto = '\0';
    strcat(saida, "_out.txt");
    FILE *arquivo = fopen(entrada, "r");
    if (arquivo == NULL) {
        printf("Falha ao abrir o arquivo! Voltando ao menu inicial!\n");
        return;
    }
    printf("Arquivo de entrada: %s\n", entrada);
    printf("Arquivo de saida: %s\n", saida);
    fclose(arquivo);
}

void preencher_tabuleiro(int *linhas,int *colunas,int *geracoes,int ***matriz,char *entrada){
    int i,j;
    char aux;
    FILE* arquivo=fopen(entrada,"r");
    if (arquivo == NULL) {
        printf("Falha ao abrir o arquivo! Voltando ao menu inicial!\n");
        return;
    }
    fscanf(arquivo, "%d %d %d",linhas, colunas, geracoes);
    *matriz = malloc((*linhas) *sizeof(int *));
    for (i = 0; i < *linhas; i++)
        (*matriz)[i] = malloc((*colunas) *sizeof(int));
    for (i = 0; i < *linhas; i++){
        for (j = 0; j < *colunas; j++){ 
            aux = fgetc(arquivo);
            while (aux==' '||aux=='\n')
                aux = fgetc(arquivo);
            if(aux=='0')
                (*matriz)[i][j]=0;
            else
                (*matriz)[i][j]=1;
        }
    }
    fclose(arquivo);
}

void rodar_geracao(int *linhas,int *colunas,int *geracoes,int ***matriz,char *saida){
    int i,j,g;
    FILE* arquivo=fopen(saida,"w");
    if (arquivo == NULL) {
        printf("Falha ao abrir o arquivo! Voltando ao menu inicial!\n");
        return;
    }

    int cr7[*linhas][*colunas];

    for(g=0; g<=*geracoes; g++){
        if(g>0){
            for(i=0; i<*linhas; i++)
                for(j=0; j<*colunas; j++)
                    cr7[i][j]=0;

            for(i=0; i<*linhas; i++){
                for(j=0; j<*colunas; j++){
                    for(int dx=-1; dx<=1; dx++){
                        for(int dy=-1; dy<=1; dy++){
                            if(dx==0 && dy==0) continue;
                            int ni=i+dx, nj=j+dy;
                            if(ni>=0 && ni<*linhas && nj>=0 && nj<*colunas){
                                if((*matriz)[ni][nj]==0) cr7[i][j]++;
                            }
                        }
                    }
                }
            }

            int **nova = malloc((*linhas)*sizeof(int*));
            for(i=0;i<*linhas;i++){
                nova[i] = malloc((*colunas)*sizeof(int));
                for(j=0;j<*colunas;j++){
                    if((*matriz)[i][j]==0){
                        if(cr7[i][j]<2 || cr7[i][j]>3)
                            nova[i][j]=1; 
                        else
                            nova[i][j]=0; 
                    } else {
                        if(cr7[i][j]==3)
                            nova[i][j]=0; 
                        else
                            nova[i][j]=1; 
                    }
                }
            }

            for(i=0;i<*linhas;i++)
                for(j=0;j<*colunas;j++)
                    (*matriz)[i][j]=nova[i][j];

            for(i=0;i<*linhas;i++)
                free(nova[i]);
            free(nova);
        }

        fprintf(arquivo,"Geracao %d:\n",g);
        for(i=0;i<*linhas;i++){
            for(j=0;j<*colunas;j++){
                if((*matriz)[i][j]==0)
                    fprintf(arquivo,"0 ");
                else
                    fprintf(arquivo,". ");
            }
            fprintf(arquivo,"\n");
        }
    }

    fclose(arquivo);
}



int main() {
    Tabuleiro variaveis;
    int x;
    do {
        printf("Menu de opcoes:\n1 - Abrir arquivo de entrada\n2 - Preencher tabuleiro de entrada\n3 - Rodar geracoes\nEscolha sua opcao (-1 para sair): ");
        scanf("%d", &x);
        getchar();
        switch (x) {
            case 1:
                entrada(variaveis.nome_entrada, variaveis.nome_saida);
                break;
            case 2:
                preencher_tabuleiro(&variaveis.linhas,&variaveis.colunas,&variaveis.geracoes,&variaveis.matriz,variaveis.nome_entrada);
                break;
            case 3:
                rodar_geracao(&variaveis.linhas,&variaveis.colunas,&variaveis.geracoes,&variaveis.matriz,variaveis.nome_saida);
                break;
            case -1:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (x != -1);
    return 0;
}
