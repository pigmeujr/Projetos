#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
    if (num == 0 || num == 1) 
        return 1;
    return num * fatorial(num - 1);
}

int main() {
    int n, i = 1;
    int numerador = 1; // Variável que representa o numerador
    int denominador;   // Variável para armazenar os fatoriais
    int soma = 0;

    // Entrada do usuário
    printf("Digite um valor para n (1 <= n <= 5): ");
    scanf("%d", &n);

    // Verifica se n está no intervalo correto
    if (n < 1 || n > 5) {
        printf("Valor fora do intervalo permitido!\n");
        return 1;
    }

    // Inicializa soma com o primeiro termo (1)
    soma = numerador;

    // Estrutura while para calcular os termos da série
    while (i <= n) {
        denominador = fatorial(i);
        soma += numerador / denominador;
        i++;
    }

    // Exibe o resultado
    printf("O valor aproximado de F (em inteiros) é: %d\n", soma);

    return 0;
}