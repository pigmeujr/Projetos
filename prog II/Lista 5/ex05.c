#include <stdio.h>

    int main(){
        //qtd = linhas, cont = colunas

        int i,j,a[4][4],qtd=0,cont=0;

        for (i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
                scanf("%d",&a[i][j]);
            }
        }
        for (i = 0; i < 4; i++){
            if(a[i][j]=0){
                qtd++;
            }
        }
        for (j = 0; j < 4; j++){
            if(a[i][j]==0){
                cont++;
            }
        }
        printf("O vetor tem %d linhas nulas e %d colunas nulas",qtd,cont);
        
        
        
    }