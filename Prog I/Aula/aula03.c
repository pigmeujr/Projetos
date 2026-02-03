#include <stdio.h>

int main(){
    float altura,peso,imc;
    printf("Digite seu peso \n");
    scanf("%f",&peso);
    printf("Digite sua altura \n");
    scanf("%f",&altura);
    imc = peso/(altura*altura);
    if (imc < 18.5){
        printf("Baixo peso");
    }
        if (imc > 18.5 && imc <= 24.9){
            printf("Peso normal");
        }
            if (imc > 25.0 && imc <= 29.9){
                printf("Pre-obesidade");
            }
                if (imc > 30.0 && imc <= 34.9){
                    printf("Obesidade Grau I");
                }
                    if (imc > 35.0 && imc <= 39.9){
                        printf("Obesidade Grau II");
                    }
                        if ( imc > 40){
                            printf("Obesidade Grau III");
                        }
}   

