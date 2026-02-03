#include <stdio.h>

    int main(){

        int i,v[9],j,cont;

        for (i = 0; i < 9; i++){
            printf("Informe um elemento para a posicao %d do vetor:",i);
            scanf("%d",&v[i]);
        }
            for (i = 0; i < 9; i++){
                cont=0;
                if(v[i]==1){
                    printf("Elemento primo encontrado: %d. Posicao no vetor: %d\n", v[i], i);
                } else { 
                for (j = 1; j <= v[i]; j++){
                    if(v[i]%j==0){
                        cont++;
                    }
                }
                if(cont==2){
                    printf("Elemento primo encontrado: %d. Posicao no vetor: %d\n",v[i],i);
                }
            }
        }
}