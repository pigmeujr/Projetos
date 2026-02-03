#include <stdio.h>

int main() {
    int cod;
    float nota1, nota2, nota3, maior, media;

    do {
        printf("Digite o código do aluno: ");
        scanf("%d", &cod);

        if (cod < 0)
            break;

        printf("Digite as três notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        // Descobrir qual é a maior nota
        maior = nota1;
        if (nota2 > maior) maior = nota2;
        if (nota3 > maior) maior = nota3;

        // Calcular a média ponderada
        if (maior == nota1)
            media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;
        else if (maior == nota2)
            media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10;
        else
            media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10;

        // Mostrar resultado
        printf("Código: %d\n", cod);
        printf("Notas: %.1f %.1f %.1f\n", nota1, nota2, nota3);
        printf("Média: %.2f - %s\n\n", media, (media >= 5) ? "APROVADO" : "REPROVADO");

    } while (cod >= 0);

    return 0;
}
