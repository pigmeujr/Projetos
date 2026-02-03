#include <stdio.h>

    int main(){
        int x,i,maior=-5000000,menor=1000000;

        for (i = 0; i <50; i++){
            printf("Digite 50 numeros:");
            scanf("%d",&x);

            if(x>maior){
                maior=x;
            }
            if(x<menor){
                menor=x;
            }
        }
        printf("O maior numero eh %d e o menor eh %d",maior,menor);
        
    }