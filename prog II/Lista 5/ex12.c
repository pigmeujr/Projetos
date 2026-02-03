#include <stdio.h>

    int main(){
        int i,j,m[7][7];
        int soma_coluna=0,soma_linha=0,soma_total=0;
        int di=0,ds=0,ts=0,ti=0;
        int acima_ds=0,abaixo_ds=0;
        for (i = 0; i < 7; i++){ 
            for (j = 0; j < 7; j++){
                scanf("%d",&m[i][j]);
            }
        }
        //letra A
        for (j = 0; j < 7; j++){
            soma_linha+=m[3][j];
        }
        //letra B
        for (i = 0; i < 7; i++){
            soma_coluna+=m[i][5];
        }
        //letra C e D
        for (i = 0; i < 7; i++){ 
            for (j = 0; j < 7; j++){
                if (i==j){
                    di+=m[i][j];
                }
                if(i+j==6){
                    ds+=m[i][j];
                }
            }
        }
        //Letra e
        for (i = 0; i < 7; i++){ 
            for (j = 0; j < 7; j++){
                soma_total+=m[i][j];
            }
        }
        //letra F e G
        for (i = 0; i < 7; i++){ 
            for (j = 0; j < 7; j++){
                if (i<j){
                    ts+=m[i][j];
                }
                if(i>j){
                    printf("G: somando m[%d][%d] = %d\n", i, j, m[i][j]);
                    ti+=m[i][j];
                }
            }
        }
        //letra H e I
        for (i = 0; i < 7; i++){ 
            for (j = 0; j < 7; j++){
                if (i+j<6){
                    acima_ds+=m[i][j];
                }
                if(i+j>6){
                    abaixo_ds+=m[i][j];
                }
            }
        }
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",soma_linha,soma_coluna,di,ds,soma_total,ts,ti,acima_ds,abaixo_ds);

        
    }