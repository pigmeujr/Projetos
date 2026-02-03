#include <stdio.h>

int main() {
    // Variáveis
    int numero, idade, gols, presencas, penalidades;
    float altura, peso, avaliacao, fator_confederacao;

    // Definição do fator da confederação
    fator_confederacao = 0.8;

    // Jogador 1
    printf("\n--- Jogador 1 ---\n");
    printf("Numero do jogador: ");
    scanf("%d", &numero);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura (em metros): ");
    scanf("%f", &altura);

    printf("Peso (em kg): ");
    scanf("%f", &peso);

    printf("Numero de gols no ultimo campeonato: ");
    scanf("%d", &gols);

    printf("Quantidade de presencas no ultimo campeonato: ");
    scanf("%d", &presencas);

    printf("Penalidades (suspensoes em minutos): ");
    scanf("%d", &penalidades);

    // Cálculo da avaliação
    avaliacao = ((gols + presencas + (penalidades / 4.0)) + ((altura + peso) / 5.0) - idade) / fator_confederacao;

    // Exibição do resultado
    printf("Avaliacao do jogador %d: %.2f\n", numero, avaliacao);

    // Jogador 2
    printf("\n--- Jogador 2 ---\n");
    printf("Numero do jogador: ");
    scanf("%d", &numero);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura (em metros): ");
    scanf("%f", &altura);

    printf("Peso (em kg): ");
    scanf("%f", &peso);

    printf("Numero de gols no ultimo campeonato: ");
    scanf("%d", &gols);

    printf("Quantidade de presencas no ultimo campeonato: ");
    scanf("%d", &presencas);

    printf("Penalidades (suspensoes em minutos): ");
    scanf("%d", &penalidades);

    // Cálculo da avaliação
    avaliacao = ((gols + presencas + (penalidades / 4.0)) + ((altura + peso) / 5.0) - idade) / fator_confederacao;

    // Exibição do resultado
    printf("Avaliacao do jogador %d: %.2f\n", numero, avaliacao);

    // Jogador 3
    printf("\n--- Jogador 3 ---\n");
    printf("Numero do jogador: ");
    scanf("%d", &numero);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura (em metros): ");
    scanf("%f", &altura);

    printf("Peso (em kg): ");
    scanf("%f", &peso);

    printf("Numero de gols no ultimo campeonato: ");
    scanf("%d", &gols);

    printf("Quantidade de presencas no ultimo campeonato: ");
    scanf("%d", &presencas);

    printf("Penalidades (suspensoes em minutos): ");
    scanf("%d", &penalidades);

    // Cálculo da avaliação
    avaliacao = ((gols + presencas + (penalidades / 4.0)) + ((altura + peso) / 5.0) - idade) / fator_confederacao;

    // Exibição do resultado
    printf("Avaliacao do jogador %d: %.2f\n", numero, avaliacao);

    return 0;
}
