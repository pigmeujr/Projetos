#include <stdio.h>

#define ESTADOS 26
#define MUNICIPIOS 10

int main() {
    int A[ESTADOS][MUNICIPIOS];
    int estadoMaisPopuloso = 0, municipioMaisPopuloso = 0;
    int maiorPopulacao = 0;
    int somaCapitais = 0;

    // Leitura da matriz
    printf("Digite a população dos municípios (26 estados x 10 municípios):\n");
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < MUNICIPIOS; j++) {
            scanf("%d", &A[i][j]);

            // Verifica se é o município mais populoso encontrado até agora
            if (A[i][j] > maiorPopulacao) {
                maiorPopulacao = A[i][j];
                estadoMaisPopuloso = i;
                municipioMaisPopuloso = j;
            }
        }
        // Soma das capitais (primeira coluna)
        somaCapitais += A[i][0];
    }

    // Média das populações das capitais
    float mediaCapitais = (float)somaCapitais / ESTADOS;

    // Exibição dos resultados
    printf("\nMunicípio mais populoso: Município %d do Estado %d\n", municipioMaisPopuloso + 1, estadoMaisPopuloso + 1);
    printf("População do município mais populoso: %d\n", maiorPopulacao);
    printf("Média da população das capitais: %.2f\n", mediaCapitais);

    return 0;
}
