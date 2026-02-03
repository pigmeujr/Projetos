#include <stdio.h>

int main() {
    int V[6],contador=0,i;

    printf("Digite 6 valores:");
    for(i=0; i<6;i++){  
    scanf("%d",&V[i]);
    }
    for(i=0; i<6;i++){
        if(V[i]<0)
        contador++;
    }
    printf("Tem %d numeros negativos",contador);
}