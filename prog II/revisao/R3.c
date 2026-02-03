#include <stdio.h>

    int main() {

        float media;
        int i,soma=0,cont=0;

        do{ 
            printf("Digite os valor:");
            scanf("%d",&i);
            if(i>=0){ 
            soma+=i;
            cont++;
        }
            media=soma/cont;
        } while (i>=0); 
                printf("media eh %f",media);
}