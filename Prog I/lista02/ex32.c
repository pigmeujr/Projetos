#include <stdio.h>

int main() {
    int kw;
    float conta;
    printf("Digite o consumo de de Kw:");
    scanf("%d",&kw);
        if (kw>=0 || kw<=70){
            conta = kw*0.09;
            printf("O valor da conta eh %.2f",conta);
        }else{
            if (kw>=71 || kw<=150){
                conta = kw*0.20;
                printf("O valor da conta eh %.2f",conta);
            }
            if (kw>=151 || kw<=200){
                conta = kw*0.23;
                printf("O valor da conta eh %.2f",conta);
            }else{
                conta = kw*0.26;
                printf("O valor da conta eh %.2f",conta);
            }
        }
}