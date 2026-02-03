#include <stdio.h>
#include <string.h>

int main() {
    char G[5]; // Vetor com as respostas corretas
    char R[5]; // Vetor com as respostas de cada aluno
    char nome[50]; // Nome do aluno
    int i, j, acertos;
    float nota;

    // Leitura das respostas corretas
    printf("Digite as respostas corretas das 5 questões (A a E):\n");
    for (i = 0; i < 5; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &G[i]); // Espaço antes do %c para evitar problemas com o buffer
    }

    // Leitura dos dados dos alunos
    for (i = 0; i < 15; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf("%s", nome);

        printf("Digite as respostas do aluno %d (A a E):\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Questão %d: ", j + 1);
            scanf(" %c", &R[j]); // Espaço antes do %c para evitar problemas com o buffer
        }

        // Cálculo do número de acertos
        acertos = 0;
        for (j = 0; j < 5; j++) {
            if (R[j] == G[j]) {
                acertos++;
            }
        }

        // Cálculo da nota (cada questão vale 2 pontos)
        nota = acertos * 2;

        // Exibição dos resultados
        printf("\nNome: %s\n", nome);
        printf("Número de acertos: %d\n", acertos);
        printf("Nota: %.1f\n", nota);
    }

    return 0;
}