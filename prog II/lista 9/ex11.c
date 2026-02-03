#include <stdio.h>

float media(float a, float b, float c, char escolha){
    float resultado;

    switch (escolha){
    case 'A':
       resultado= (a+b+c)/3.0;
        break;
    
    case 'B':
    resultado = (a*5)+(b*3)+(c*2)/10.0;
        break;

    default:
    printf("Comando invalido");
    return -1;
        break;
    }
    return resultado;
}

    int main(){

        float x,y,z;
        char letra;

        printf("Digite as notas do aluno:");
        scanf("%f %f %f",&x,&y,&z);

        printf("Digite A para media aritmetica ou P para media ponderada: ");
        scanf(" %c",&letra);

         float r = media(x,y,z, letra);

        if (r != -1){
        printf("Resultado = %.2f\n", r);
        }
    }