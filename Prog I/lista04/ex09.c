#include <stdio.h>

int main(){
    int V[10],i,j,repetido;

    printf("Digite 10 valores:");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&V[i]);
    }
    printf("Valores repetidos:");
    for ( i = 0; i < 10; i++){
        repetido=0;
        for (j = i+1; j < 10; j++)
        {
            if(V[i]==V[j]){
                printf("%d\n",V[i]);
                repetido=1;
            }
        }
        
    }
    
}