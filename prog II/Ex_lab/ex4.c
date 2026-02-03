#include <stdio.h>

    int main(){

        int i,v[6],qtd=0,cont=0;
        int pares[6],impares[6];

        for (i = 0; i < 6; i++){
            printf("Informe um elemento para a posicao %d do vetor:",i);
            scanf("%d",&v[i]);
        }
        for (i = 0; i < 6; i++){
            if(v[i]%2==0){
                pares[qtd++]=v[i];
            } else {
                impares[cont++]=v[i];
            } 
        }
        printf("Elementos pares do vetor: ");
        for (i = 0; i < qtd; i++){
            printf("[%d] ",pares[i]);
        }
        printf("Quantidade -> %d\n",qtd);

        printf("Elementos impares do vetor: ");
        for (i = 0; i < cont; i++){
            printf("[%d] ",impares[i]);
        }
        printf("Quantidade -> %d\n",cont);
}