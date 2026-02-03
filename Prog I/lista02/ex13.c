#include <stdio.h>

int main() {
    int diaNasc, mesNasc, anoNasc;   // Data de nascimento
    int diaAtual, mesAtual, anoAtual; // Data atual
    int anos, meses, dias;            // Idade em anos, meses e dias

    // Entrada da data de nascimento
    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    // Entrada da data atual
    printf("Digite a data atual (dd mm aaaa): ");
    scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);

    // Cálculo inicial dos anos, meses e dias
    anos = anoAtual - anoNasc;
    meses = mesAtual - mesNasc;
    dias = diaAtual - diaNasc;

    // Ajuste para dias negativos
    if (dias < 0) {
        meses -= 1;
        if (mesAtual == 1 || mesAtual == 3 || mesAtual == 5 || mesAtual == 7 || mesAtual == 8 || mesAtual == 10 || mesAtual == 12) {
            dias += 31;
        } else if (mesAtual == 4 || mesAtual == 6 || mesAtual == 9 || mesAtual == 11) {
            dias += 30;
        } else { // Fevereiro
            dias += 28;
        }
    }

    // Ajuste para meses negativos
    if (meses < 0) {
        anos -= 1;
        meses += 12;
    }

    // Verificar se pode tirar habilitação e votar
    if (anos >= 18) {
        printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
        printf("Pode tirar carteira de habilitação.\n");
        printf("Pode votar.\n");
    } else if (anos >= 16) {
        printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
        printf("Não pode tirar carteira de habilitação.\n");
        printf("Pode votar.\n");
    } else {
        printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
        printf("Não pode tirar carteira de habilitação.\n");
        printf("Não pode votar.\n");
    }

    return 0;
}
