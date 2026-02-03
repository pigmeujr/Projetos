#include <stdio.h>

int conta_primo(int n){
    int qtd = 0;

    for (int i = 2; i <= n; i++) {
        int primo = 1; // assume que é primo
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = 0; // achou divisor
                break;
            }
        }
        if (primo) {
            qtd++;
        }
    }

    return qtd;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", conta_primo(x));
    return 0;
}
