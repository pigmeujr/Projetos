#include <stdio.h>

int main() {
  int mesAtual, placa, finalizador;

  // Leitura do mês atual
  printf("Digite o número do mês atual (1-12): ");
  scanf("%d", &mesAtual);

  // Leitura da placa do veículo
  printf("Digite os quatro números da placa do veículo: ");
  scanf("%d", &placa);

  // Obter o número finalizador da placa
  finalizador = placa % 10;

  // Determinar o mês de vencimento do IPVA
  switch (finalizador) {
    case 1:
      printf("O IPVA vence em Janeiro.\n");
      break;
    case 2:
      printf("O IPVA vence em Fevereiro.\n");
      break;
    case 3:
      printf("O IPVA vence em Março.\n");
      break;
    case 4:
      printf("O IPVA vence em Abril.\n");
      break;
    case 5:
      printf("O IPVA vence em Maio.\n");
      break;
    case 6:
      printf("O IPVA vence em Junho.\n");
      break;
    case 7:
      printf("O IPVA vence em Julho.\n");
      break;
    case 8:
      printf("O IPVA vence em Agosto.\n");
      break;
    case 9:
      printf("O IPVA vence em Setembro.\n");
      break;
    default:
      printf("O IPVA vence em Outubro.\n");
      break;
  }

  // Verificar se o IPVA vence no mês corrente
  if (finalizador == mesAtual) {
    printf("O IPVA vence neste mês.\n");
  } else {
    printf("O IPVA não vence neste mês.\n");
  }

  return 0;
}