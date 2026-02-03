#include <stdio.h>

int main(){
    int M[5][5],i,j,v[25];

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%d",&M[i][j]);
        }
    }
    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++){

        v[i*5+j]=M[i][j];
        }
        
    }
    for(i=0;i<25;i++){
        printf("%d\n",v[i]);
    }
    
}