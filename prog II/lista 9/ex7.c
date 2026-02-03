#include <stdio.h>

float converte(float c){
    int fah = c*(9.0/5.0)+32.0;
    return fah;
}

    int main(){

        float celsius;

        printf("Digite a temperatura em celsius:");
        scanf("%f",&celsius);

        printf("%.2f",converte(celsius));
    }