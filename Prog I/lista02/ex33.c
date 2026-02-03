#include <stdio.h>

int main(){
    float peso,altura,imc;
    printf("Digite seu peso e altura:");
    scanf("%f %f",&peso,&altura);
    imc = peso/(altura*altura);
   if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Acima do peso\n");
    } else {
        printf("Obeso\n");
    }

}