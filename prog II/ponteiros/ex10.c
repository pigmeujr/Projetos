#include <stdio.h>

    int main(){

        int vet[]={1,2,3,4,5},*p;

        p=vet;
        
        printf("Antes: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", vet[i]);
        }
        printf("\n");

        for (int i = 0; i < 5; i++){
            if (*(p+i)%2==0){
                *(p+i)*=2;
            }
            
        }
        
        
        printf("Depois: ");
        for (int i = 0; i < 5; i++){
            printf("%d ",vet[i]);
        }
        
    }