#include <stdio.h>

void data(int dia, int mes, int ano) {
    char *meses[] = {
        "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}

int main() {
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    data(dia, mes, ano);

    return 0;
}
