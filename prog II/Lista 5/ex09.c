#include <stdio.h>

    int main(){
        int i,j,a[3][3],l[3],di=0,ds=0,c[3];
        int referencia=0,soma=0;
        int magico=0;
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                scanf("%d",&a[i][j]);
            }
        }
        for (j = 0; j < 3; j++){
            referencia+=a[0][j];
        }
        for (i = 0; i < 3; i++){
            soma=0;
            for (j = 0; j < 3; j++){
                soma+=a[i][j];
            }
            l[i]=soma;
        }
         for (j = 0; j < 3; j++){
            soma=0;
            for (i = 0; i < 3; i++){
                soma+=a[i][j];
            }
            c[j]=soma;
        }
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                if(i==j){
                    di+=a[i][j];
                }
            }
        }
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                if(i+j==2){
                    ds+=a[i][j];
                }
            }
        }
        printf("Linha:%d\nColuna:%d\nDiagonal superior:%d\nDiagonal secundaria:%d",l[0],c[0],di,ds);
        printf("\n");
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
            }
            if(l[i]==referencia && c[i]==referencia && di==referencia && ds==referencia){
                magico=1;
            } else{
                magico=-1;
            }
        }
        
        if (magico==1){
            printf("Eh um quadrado magico");
        } else{
            printf("Nao eh um quadrado magico");
        }
    }









    