#include <stdio.h>

    int main(){

        int i,v[7],qtd=0,cont=0,quantidade=0;
        int pares[7],multiplo_3[7],multiplo_2_e_3[7];


        for (i = 0; i < 7; i++){
            printf("Informe um elemento para a posicao %d do vetor:",i);
            scanf("%d",&v[i]);
        }
        for (i = 0; i < 7; i++){
            if(v[i]%2==0){
                pares[qtd++]=v[i];
            }
        }
        for (i = 0; i < 7; i++){
            if(v[i]%3==0){
                multiplo_3[cont++]=v[i];
            }
        }
        for (i = 0; i < 7; i++){
            if(v[i]%2==0 && v[i]%3==0){
                multiplo_2_e_3[quantidade++]=v[i];
            }
        }
        
        
        printf("Elementos multiplos de 2 no vetor: ");
        for (i = 0; i < qtd; i++){
            printf("[%d] ",pares[i]);
        }
        
        printf("\nElementos multiplos de 3 no vetor: ");
        for (i = 0; i < cont; i++){
            printf("[%d] ",multiplo_3[i]);
        }

        printf("\nElementos multiplos de 2 e 3 no vetor: ");
        for (i = 0; i < quantidade; i++){
            printf("[%d] ",multiplo_2_e_3[i]);
        }
    }