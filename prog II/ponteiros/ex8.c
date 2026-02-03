#include <stdio.h>

    int main(){

        int vet[]={1,2,3,4,5},*p,*b,temp;

        p=vet;
        b=vet+4;
        
        printf("Antes: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", vet[i]);
        }
        printf("\n");

        while (p<b){
            temp=*p;
            *p=*b;
            *b=temp;
            p++;
            b--;
        }
        printf("Depois: ");
        for (int i = 0; i < 5; i++){
            printf("%d ",vet[i]);
        }
        
        
        

    }