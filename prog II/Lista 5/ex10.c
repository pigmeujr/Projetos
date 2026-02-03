#include <stdio.h>

    int main(){

        int a[3][3],i,j;
        int maior=-1,menor=10000;
        int linha=0;
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                scanf("%d",&a[i][j]);
                if(a[i][j]>maior){
                maior=a[i][j];
                linha=i;
            } 
            }
        }
        for (j = 0; j < 3; j++){
            if (a[0][j]<menor){
                menor=a[linha][j];
            }
        }
        
        printf("Elemento minimax:%d\nLinha:%d ",menor,linha);
    }