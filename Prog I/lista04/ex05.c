#include <stdio.h>

int main(){
    int D[60],i,temp;

    printf("Digite 60 numeros:");
    for (i = 0; i < 60; i++)
    {
        scanf("%d",&D[i]);
    }
    for (i = 0; i < 30; i++){
        temp=D[i];
        D[i]=D[i+30];
        D[i+30]=temp;
    }
    printf("Vetor modificado:\n");
    for (i = 0; i < 60; i++)
    {
        printf("D[%d]: %d\n",i+1,D[i]);
    }
    
}