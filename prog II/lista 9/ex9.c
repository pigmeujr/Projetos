#include <stdio.h>
#include <math.h>

float volume(float raio, float altura){
    int volume = 3.141592*pow(raio,2)*altura;
    return volume;
}

    int main(){

        float x,y;

        printf("Digite o raio e a altura:");
        scanf("%f %f",&x,&y);

        printf("O volume eh %.2f",volume(x,y));
    }