#include <stdio.h>

    int main(){

        int i,v[10],posicao[10],qtd=0;

        for (i = 0; i < 10; i++){
            printf("Informe um elemento para a posicao %d do vetor:",i);
            scanf("%d",&v[i]);
        }
        for (i = 0; i < 10; i++){
              if(v[i]==30){
                posicao[qtd++]=i;
        }
        }
        
        printf("\nPosicoes dos elementos iguais a 30 no vetor: ");
        for (i = 0; i < qtd; i++){
            printf("[%d] ",posicao[i]);
        }
    }