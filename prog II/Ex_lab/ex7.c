#include <stdio.h>

    int main(){

        int i,qtd=0;
        float v[10],soma=0;

        for (i = 0; i < 10; i++){
            printf("Informe um elemento para a posicao %d do vetor:",i);
            scanf("%f",&v[i]);
        }
        for (i = 0; i < 10; i++){
            if(v[i]<0){
                qtd++;
            }
        }
        for (i = 0; i < 10; i++){
            if(v[i]>0){
                soma+=v[i];
            }
        }
        printf("\n Quantidade de numeros negativos: %d",qtd);
        printf("\nSoma dos numeros positivos: %.2f",soma);
        
        
        
    }