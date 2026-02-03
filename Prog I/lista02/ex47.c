#include <stdio.h>

int main() {
  float salario_fixo, salario_liquido, comissao_total = 0;
  int televisores_lcd, televisores_plasma;

  // Entrada de dados
  printf("Digite o valor do salário fixo: R$ ");
  scanf("%f", &salario_fixo);
  printf("Digite o número de televisores LCD vendidos: ");
  scanf("%d", &televisores_lcd);
  printf("Digite o número de televisores Plasma vendidos: ");
  scanf("%d", &televisores_plasma);

  // Cálculo da comissão dos televisores LCD
  if (televisores_lcd >= 10) {
    comissao_total += televisores_lcd * 50.00;
  } else {
    comissao_total += televisores_lcd * 5.00;
  }

  // Cálculo da comissão dos televisores Plasma
  if (televisores_plasma >= 20) {
    comissao_total += televisores_plasma * 20.00;
  } else {
    comissao_total += televisores_plasma * 2.00;
  }

  // Cálculo do salário bruto
  float salario_bruto = salario_fixo + comissao_total;

  // Cálculo do desconto do INSS
  float desconto_inss = salario_fixo * 0.08;
  salario_liquido = salario_bruto - desconto_inss;

  // Cálculo do desconto do Imposto de Renda
  if (salario_liquido >= 500.00) {
    salario_liquido -= salario_liquido * 0.15;
  }

  // Saída do salário líquido
  printf("O salário líquido do vendedor é: R$ %.2f\n", salario_liquido);

  return 0;
}