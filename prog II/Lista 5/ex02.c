#include <stdio.h>

    int main(){

        int i,j,M[5][5];

        for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                scanf("%d",&M[i][j]);
                if(M[i][j]<0){
                    M[i][j]=M[i][j]*-1;
                }
            }
        }
        for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                printf("O resultado eh %d\n ",M[i][j]);
            }
    }
    }