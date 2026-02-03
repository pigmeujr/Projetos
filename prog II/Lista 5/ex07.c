#include <stdio.h>

    int main(){

        int i,j,m[5][5],Si[5],Sc[5];
        int a;
        printf("Digite os valores para a matriz:");
        for (i = 0; i < 5; i++){
            a=0;
            for (j = 0; j < 5; j++){
                Sc[j]=0;
                scanf("%d",&m[i][j]);
                Sc[j]+=m[i][j];
                a+=m[i][j];
            }
            Si[i]=a;
        }
        printf("Soma das colunas:\n");
        for (i = 0; i < 5; i++){
            printf("%d\n",Si[i]);
        }
        printf("Soma das colunas:\n");
         for (i = 0; i < 5; i++){
            printf("%d\n",Sc[i]);
        }
        
    }