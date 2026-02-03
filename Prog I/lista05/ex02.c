#include <stdio.h>

int main(){
    int M[5][5],i,j;

    printf("Digite 25 numeros:");
    for (i = 0; i <5 ; i++){
        for (j = 0; j < 5; j++){
            scanf("%d",&M[i][j]);
        }
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j <5; j++){
            if(M[i][j]>0){ 
           M[i][j]= M[i][j]*-1;}
        }
    }
    printf("Matriz modificada:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
}
}