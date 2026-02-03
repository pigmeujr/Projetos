#include <stdio.h>

// Função CUBO
float CUBO(float valor) {
    return valor * valor * valor; // Retorna o valor elevado ao cubo
}

int main() {
    float numero;

    // Solicita ao usuário um número
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Chama a função CUBO e exibe o resultado
    float resultado = CUBO(numero);
    printf("O cubo de %.2f é: %.2f\n", numero, resultado);

    return 0;
}