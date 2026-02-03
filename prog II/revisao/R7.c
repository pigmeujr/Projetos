#include <stdio.h>

    int main(){
        int i,x,produto=1;

        printf("Digite um numero:");
        scanf("%d",&x);
        for (i = 1; i <=x; i++){
            produto*=i;
            printf("%d ",i);
        }
        printf("Produto: %d",produto);
    }