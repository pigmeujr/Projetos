#include <stdio.h>

    int main(){
       
        int primo,vet[9];

        for (int i = 0; i < 9; i++){
            printf("Digite um numero:");
            scanf("%d",&vet[i]);
        }
        for (int i = 0; i < 9; i++){
            primo=0;
            if (vet[i] <= 1) continue;
            for (int j = 1; j <= vet[i]; j++){
                if (vet[i]%j==0){
                    primo++;
                }
            }
            if(primo==2){ 
                printf("Elemento primo encontrado: %d, Posicao no vetor: %d\n",vet[i],i);
        }
    }
    }