#include <stdio.h>

int main() {
    // Variáveis
    float ipi, valor1, valor2, total;
    int cod1, cod2, quant1, quant2;

    // Entrada de dados
    printf("Digite a porcentagem do IPI a ser acrescido: ");
    scanf("%f", &ipi);

    printf("Digite o codigo, valor unitario e quantidade da peca 1: ");
    scanf("%d %f %d", &cod1, &valor1, &quant1);

    printf("Digite o codigo, valor unitario e quantidade da peca 2: ");
    scanf("%d %f %d", &cod2, &valor2, &quant2);

    // Cálculo do preço total com IPI
    total = (valor1 * quant1 + valor2 * quant2) * (ipi / 100 + 1);

    // Saída do resultado
    printf("\nO valor total a ser pago eh: %.2f\n", total);

    return 0;
}
