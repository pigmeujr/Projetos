#include <stdio.h>
#include <math.h>

float calculo(int r){
    int volume = (4/3)*3.14*pow(r,3);
    return volume;
}

    int main(){

        float raio;

        printf("Digite o raio:");
        scanf("%f",&raio);

        printf("%.2f",calculo(raio));
    }