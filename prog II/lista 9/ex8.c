#include <stdio.h>
#include <math.h>

float hip(float a, float b){
    float hipo = sqrt(pow(a,2)+pow(b,2));
    return hipo;
}

    int main(){

        float x,y;

        printf("Digite o valor dos catetos:");
        scanf("%f %f",&x,&y);

        printf("A hipotenusa eh %.2f",hip(x,y));
    }