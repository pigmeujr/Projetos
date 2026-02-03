#include <stdio.h>

int main() {
    int teste1[10],teste2[10],i,j;

    printf("Digite 10 valores:");
    for(i=0;i<10;i++){
        scanf("%d",&teste1[i]);
    }
    for(i=0; i<10;i++){
        if(i%2==0){
            teste2[i]=teste1[i]*5;
        } else{
            teste2[i]=teste1[i]+5;
        }
    }
    printf("\nVetor teste1:\n");
    for(i=0;i<10;i++){
        printf("%d",teste1[i]);
    }
    printf("\nVetor teste2:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d",teste2[i]);
    }
    printf("\n");

}