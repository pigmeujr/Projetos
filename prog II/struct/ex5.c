#include <stdio.h>
#include <string.h>

#define MAX 5000

typedef struct {
    char proprietario[50];
    char chassi[20];
    char modelo[30];
    char marca[30];
    char cor[20];
    char combustivel[20];
    int ano;
    char placa[8];  
} Veiculo;

int main() {

    Veiculo v[MAX];

    /* ========= SUPONDO QUE OS 5000 VEICULOS JA FORAM CADASTRADOS ========= */
    /* (Em prova, nao precisa implementar o cadastro se nao foi pedido) */

    /* ===================== ITEM A ===================== */
    printf("\n--- Proprietarios com carros ate 1990 e gasolina ---\n");
    for (int i = 0; i < MAX; i++) {
        if (v[i].ano <= 1990 && strcmp(v[i].combustivel, "gasolina") == 0) {
            printf("%s\n", v[i].proprietario);
        }
    }

    /* ===================== ITEM B ===================== */
    printf("\n--- Placas e proprietarios (A...0/2/7) ---\n");
    for (int i = 0; i < MAX; i++) {
        int tam = strlen(v[i].placa);
        char primeira = v[i].placa[0];
        char ultima = v[i].placa[tam - 1];

        if (primeira == 'A' && (ultima == '0' || ultima == '2' || ultima == '7')) {
            printf("Placa: %s | Proprietario: %s\n",
                   v[i].placa, v[i].proprietario);
        }
    }

    /* ===================== ITEM C ===================== */
    printf("\n--- Modelo e cor (soma dos numeros da placa par) ---\n");
    for (int i = 0; i < MAX; i++) {
        int soma = 0;

        for (int j = 0; j < strlen(v[i].placa); j++) {
            if (v[i].placa[j] >= '0' && v[i].placa[j] <= '9') {
                soma += v[i].placa[j] - '0';
            }
        }

        if (soma % 2 == 0) {
            printf("Modelo: %s | Cor: %s\n", v[i].modelo, v[i].cor);
        }
    }

    /* ===================== ITEM D ===================== */
    char chassiBusca[20];
    char novoProprietario[50];
    int achou = 0;

    printf("\nDigite o numero do chassi para alterar o proprietario: ");
    fgets(chassiBusca, 20, stdin);
    chassiBusca[strcspn(chassiBusca, "\n")] = '\0';

    for (int i = 0; i < MAX; i++) {
        if (strcmp(v[i].chassi, chassiBusca) == 0) {
            printf("Digite o novo nome do proprietario: ");
            fgets(novoProprietario, 50, stdin);
            novoProprietario[strcspn(novoProprietario, "\n")] = '\0';

            strcpy(v[i].proprietario, novoProprietario);
            achou = 1;
            printf("Proprietario alterado com sucesso!\n");
            break;
        }
    }

    if (achou == 0) {
        printf("Chassi nao encontrado!\n");
    }

    return 0;
}
