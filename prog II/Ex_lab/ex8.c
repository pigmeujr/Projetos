#include <stdio.h>

    int main(){

        int i;
        float v[10],maior=-500,results[10];

        for (i = 0; i < 10; i++){
            printf("Informe um elemento para a posicao %d do vetor:",i);
            scanf("%f",&v[i]);
        }
        for (i = 0; i < 10; i++){
            if(v[i]>maior)
            maior=v[i];
        }

        printf("\n--- Elementos do vetor depois dos calculos ---\n");
        for (i = 0; i < 10; i++){
          results[i]= v[i]/maior;
          printf("[%.2f] ",results[i]);
        }
        
        
        
    }