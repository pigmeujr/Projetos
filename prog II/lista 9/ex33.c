#include <stdio.h>
#include <math.h>
    float calculo(int n, int *v){
        float dp, media,qtd=0;
        float soma=0;

        for (int i = 0; i < n; i++){
            qtd+=v[i];
        }
        media=qtd/n;

        for (int i = 0; i < n; i++){
           soma += pow(v[i]-media,2);
        }
        dp=sqrt(soma/n);

        return dp;
    }

    int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    float resultado = calculo(n, v);
    printf("Desvio padrao = %.2f\n", resultado);
}