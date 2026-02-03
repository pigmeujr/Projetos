#include <stdio.h>

    int main(){

        int i,j,m[3][3],n[3][3],aux=0;
        
        printf("Digite os valores para a primeira matriz:\n");
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                scanf("%d",&m[i][j]);
            }
            
        }
        printf("Digite os valores para a segunda matriz:\n");
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                scanf("%d",&n[i][j]);
                if(i>j){
                aux=m[i][j];
                m[i][j] = n[i][j];
                n[i][j]=aux;
            }
            }
            
        }
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                printf("%d ",m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                printf("%d ",n[i][j]);
            }
            printf("\n");
        }
        
    }



    