#include <stdio.h>

int main(){
    
    int V[16],i,temp;

    printf("Digite 16 numeros:");
    for ( i = 0; i < 16; i++)
    {
        scanf("%d",&V[i]);
    }
    for (i = 0; i < 8; i++){
        temp=V[i];
        V[i]=V[i+8];
        V[i+8]=temp;
    }
    printf("Vetor modificado:\n");
    for (i = 0; i < 16; i++)
    {
        printf("V[%d]: %d\n",i+1,V[i]);
    }

}