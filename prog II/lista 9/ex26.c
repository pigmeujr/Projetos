#include <stdio.h>
#include <math.h>
int fatorial(int n){
    int fatorial = 1;
    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }
    return fatorial;
}
float neperiano(int x){
    float qtd = 0.0;
    for (int i = 0; i < x; i++){
        qtd += 1.0 / fatorial(i);
    }
    return qtd;
}
int main(){
    int termos;
    printf("Digite o número de termos para calcular o número de Euler: ");
    scanf("%d", &termos);
    if (termos <= 0){
        printf("Por favor, digite um número positivo.\n");
        return 1;
    }
    float resultado = neperiano(termos);
    printf("Aproximação do número de Euler com %d termos: %.6f\n", termos, resultado);
    return 0;
}