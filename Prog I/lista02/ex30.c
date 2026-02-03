#include <stdio.h>

int main() {
    char cpf[15];
    int dependentes;
    float renda_mensal, renda_descontada, imposto;

    // Entrada de dados
    printf("Digite o CPF do contribuinte: ");
    scanf("%s", cpf);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    printf("Digite a renda mensal (em mil reais): ");
    scanf("%f", &renda_mensal);

    // Calcula a renda descontada pelos dependentes
    renda_descontada = renda_mensal - (dependentes * (renda_mensal * 0.05));

    // Determina o imposto com base na renda descontada
    if (renda_descontada <= 2) {
        imposto = 0; // Isento
    } else if (renda_descontada > 2 && renda_descontada <= 3) {
        imposto = renda_descontada * 0.05;
    } else if (renda_descontada > 3 && renda_descontada <= 5) {
        imposto = renda_descontada * 0.10;
    } else if (renda_descontada > 5 && renda_descontada <= 7) {
        imposto = renda_descontada * 0.15;
    } else {
        imposto = renda_descontada * 0.20;
    }

    // Exibe os resultados
    printf("CPF do contribuinte: %s\n", cpf);
    printf("Renda mensal: R$ %.2f\n", renda_mensal);
    printf("Renda apos desconto por dependentes: R$ %.2f\n", renda_descontada);
    printf("Imposto a ser pago: R$ %.2f\n", imposto);

    return 0;
}
