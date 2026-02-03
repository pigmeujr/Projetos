#include <stdio.h>

int main() {
    int p = 0; // contador de números perfeitos encontrados

    for (int i = 1; p < 5; i++) {
        int soma = 0;

        // soma os divisores próprios de i
        for (int d = 1; d < i; d++) {
            if (i % d == 0) {
                soma += d;
            }
        }

        // verifica se é número perfeito
        if (soma == i) {
            printf("%d é número perfeito\n", i);
            p++; // incrementa o contador de números perfeitos
        }
    }

    return 0;
}
