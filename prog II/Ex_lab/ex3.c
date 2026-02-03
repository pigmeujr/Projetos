#include <stdio.h>

    int main(){

        int i,v1[5],v2[5],v3[10],j=0;

        for (i = 0; i < 5; i++){
            printf("Digite um valor para o vetor 1:");
            scanf("%d",&v1[i]);
        }

        for (i = 0; i < 5; i++){
            printf("Digite um valor para o vetor 2:");
            scanf("%d",&v2[i]);
        }
        
        for (i = 0; i < 5; i++){
            v3[j++]=v1[i];
            v3[j++]=v2[i];
        }

        printf("Vetor intercalado:\n");
        for (i = 0; i < 10; i++){
            printf("%d ",v3[i]);
        }
        
        
        
        
    }