#include <stdio.h>

    int main(){

        int A[26][10],i,j,cont=0;
        int maior=-1,estado=-1,municipio=-1;
        float media;

        printf("Digite os estados e a populacao:\n");
        for (i = 0; i < 26; i++){
            for (j = 0; j < 10; j++){
               scanf("%d",&A[i][j]);
               if (A[i][j]>maior){
                maior=A[i][j];
                estado=i;
                municipio=j;
               }
                
            }
        }
        for (i = 0; i < 26; i++){
            cont+=A[i][0];
            media=cont/26;
        }
        printf(" Mais populoso: %d\n Estado: %d\n Municipio: %d\n media: %.2f",maior,estado,municipio,media);
        
    }