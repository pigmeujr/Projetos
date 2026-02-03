#include <stdio.h>

#define TAMANHO 10 // Definindo o tamanho das matrizes

int main() {
    int matriz1[TAMANHO][TAMANHO], matriz2[TAMANHO][TAMANHO];
    int i, j, temp;

    // Leitura da primeira matriz
    printf("Digite os elementos da primeira matriz 10x10:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Leitura da segunda matriz
    printf("Digite os elementos da segunda matriz 10x10:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Troca da diagonal inferior da primeira matriz com a diagonal superior da segunda matriz
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (i > j) { // Diagonal inferior da primeira matriz
                temp = matriz1[i][j];
                matriz1[i][j] = matriz2[i][j]; // Substitui pelo elemento da diagonal superior da segunda matriz
                matriz2[i][j] = temp;
            }
        }
    }

    // Exibição da primeira matriz após a troca
    printf("\nPrimeira matriz após a troca:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    // Exibição da segunda matriz após a troca
    printf("\nSegunda matriz após a troca:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}