#include <stdio.h>

    int main(){
        FILE* arquivo =fopen("vetor.bin","rb");
        if(arquivo==NULL){
            printf("Erro");
            return(1);
        }
        int numeros[100];
        fread(numeros, sizeof(int),100,arquivo);

        for (int i = 0; i < 100; i++){
            printf("%d\n",numeros[i]);
        }

        fclose(arquivo);
        return(0);
        
    }