#include <stdio.h>

int main(){
    float x1,x2,y1,y2,Manhattan;
    printf("Digite a cordenada: \n");
    scanf("%f",&x1);
    printf("Digite a cordenada: \n");
    scanf("%f",&x2);
    printf("Digite a cordenada: \n");
    scanf("%f",&y1);
    printf("Digite a cordenada: \n");
    scanf("%f",&y2);
    Manhattan = (x1-x2)+(y1-y2);
    printf("A distancia Manhattan eh: %f",Manhattan);

}