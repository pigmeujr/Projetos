#include <stdio.h>

    int main(){
        FILE* arquivo;
        arquivo = fopen("multiplos7.txt","w");
        int i;

        if (arquivo==NULL){
            printf("Erro");
            return(1);
        }
        for (i = 0; i <= 94365; i++){
            if(i%7==0){
                fprintf(arquivo,"%d\n",i);
            }
        }
        fclose(arquivo);
        return(0);
        
    }