#include <stdio.h>

// Função para calcular a média
float media(float x, float y, float z) {
    return (x + y + z) / 3; // Corrigido o cálculo da média
}

int main() {
    char aluno[50]; // Aumentei o tamanho do array para armazenar nomes maiores
    float nota1, nota2, nota3;

    // Loop para ler os dados de vários alunos
    while (1) {
        // Ler o nome do aluno
        printf("Digite o nome do aluno (ou 'FIM' para encerrar): ");
        scanf("%s", aluno);

        // Verificar se o nome é "FIM"
        if (strcmp(aluno, "FIM") == 0) {
            printf("Programa encerrado.\n");
            break; // Sai do loop
        }

        // Ler as três notas do aluno
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        // Calcular a média usando a função media
        float resultado = media(nota1, nota2, nota3);

        // Exibir o nome e a média do aluno
        printf("Aluno: %s\n", aluno);
        printf("Média: %.2f\n\n", resultado);
    }

    return 0;
}