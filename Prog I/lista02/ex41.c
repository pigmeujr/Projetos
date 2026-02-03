#include <stdio.h>

int main() {
    // Declaração das variáveis
    float produto1, produto2, produto3;
    float revenda1, revenda2, revenda3;
    float lucroPercentual;

    // Entrada dos valores de compra
    printf("Digite o valor de compra do produto 1: R$ ");
    scanf("%f", &produto1);

    printf("Digite o valor de compra do produto 2: R$ ");
    scanf("%f", &produto2);

    printf("Digite o valor de compra do produto 3: R$ ");
    scanf("%f", &produto3);

    // Produto 1: calcula o lucro baseado na tabela
    if (produto1 <= 9.99) lucroPercentual = 70;
    else if (produto1 <= 29.99) lucroPercentual = 50;
    else if (produto1 <= 49.99) lucroPercentual = 40;
    else lucroPercentual = 30;

    revenda1 = produto1 + (produto1 * lucroPercentual / 100);

    // Produto 2: calcula o lucro baseado na tabela
    if (produto2 <= 9.99) lucroPercentual = 70;
    else if (produto2 <= 29.99) lucroPercentual = 50;
    else if (produto2 <= 49.99) lucroPercentual = 40;
    else lucroPercentual = 30;

    revenda2 = produto2 + (produto2 * lucroPercentual / 100);

    // Produto 3: calcula o lucro baseado na tabela
    if (produto3 <= 9.99) lucroPercentual = 70;
    else if (produto3 <= 29.99) lucroPercentual = 50;
    else if (produto3 <= 49.99) lucroPercentual = 40;
    else lucroPercentual = 30;

    revenda3 = produto3 + (produto3 * lucroPercentual / 100);

    // Exibe os valores finais de revenda
    printf("\nValor de revenda do produto 1: R$ %.2f\n", revenda1);
    printf("Valor de revenda do produto 2: R$ %.2f\n", revenda2);
    printf("Valor de revenda do produto 3: R$ %.2f\n", revenda3);

    return 0;
}
