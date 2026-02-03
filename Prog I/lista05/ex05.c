#include <stdio.h>

int main() {
    int A[4][4], i, j;
    int linhasNulas = 0, colunasNulas = 0;

    // Leitura da matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Verificação de linhas nulas
    for (i = 0; i < 4; i++) {
        int linhaNula = 1;  // Assume que a linha é nula
        for (j = 0; j < 4; j++) {
            if (A[i][j] != 0) {
                linhaNula = 0;  // A linha não é nula
                break;
            }
        }
        if (linhaNula) linhasNulas++;
    }

    // Verificação de colunas nulas
    for (j = 0; j < 4; j++) {
        int colunaNula = 1;  // Assume que a coluna é nula
        for (i = 0; i < 4; i++) {
            if (A[i][j] != 0) {
                colunaNula = 0;  // A coluna não é nula
                break;
            }
        }
        if (colunaNula) colunasNulas++;
    }

    // Exibição do resultado
    printf("Existem %d linhas e %d colunas nulas\n", linhasNulas, colunasNulas);

    return 0;
}
