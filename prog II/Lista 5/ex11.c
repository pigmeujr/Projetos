#include <stdio.h>

int main() {
    int i, j, k;
    int a[10][4], b[4][3], c[10][3];

    // Leitura da matriz A (10x4)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Leitura da matriz B (4x3)
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Inicializa e calcula C = A * B
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0; // Inicializa com 0
            for (k = 0; k < 4; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Imprime a matriz resultante C (10x3)
    printf("Matriz resultante C (10x3):\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}