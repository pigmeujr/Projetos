#include <stdio.h>

    int main(){
       
        int vet1[5],vet2[5],vet[10],k=0;;

        for (int i = 0; i < 5; i++){
            scanf("%d",&vet1[i]);
        }
        
        for (int i = 0; i < 5; i++){
            scanf("%d",&vet2[i]);
        }

        
        for (int i = 0; i < 5; i++){
            vet[k] = vet1[i];  
             k++;
            vet[k] = vet2[i];   
            k++;
        }
        for (int i = 0; i < 10; i++){
             printf("%d ",vet[i]);
        }
        
    }