#include <stdio.h>

int main() {
  float preco_normal, preco_final;
  char dia_semana, musica_ao_vivo;

  // Lê o preço normal da entrada
  printf("Digite o preço normal da entrada: ");
  scanf("%f", &preco_normal);

  // Lê o dia da semana
  printf("Digite o dia da semana ('S','T', 'Q', 'A', 'E', 'B', 'D'): ");
  scanf(" %c", &dia_semana);

  // Lê se é dia de música ao vivo
  printf("É dia de música ao vivo? ('S' ou 'N'): ");
  scanf(" %c", &musica_ao_vivo);

  // Calcula o preço final
  if (dia_semana == 'S' || dia_semana == 'T' || dia_semana == 'Q') {
    preco_final = preco_normal * 0.75; // Desconto de 25%
  } else {
    preco_final = preco_normal;
  }

  if (musica_ao_vivo == 'S') {
    preco_final *= 1.15; // Aumento de 15%
  }

  // Imprime o preço final
  printf("O preço final da entrada é: %.2f\n", preco_final);

  return 0;
}