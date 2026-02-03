#include <stdio.h>

    int main(){

        FILE* arquivo = fopen("vetor.bin","wb");
        if(arquivo==NULL){
            printf("Erro");
            return(1);
        }
        int v[100],i;

        for (i = 0; i < 100; i++){
            v[i]=i+1;
        }
        fwrite(v,sizeof(int),100,arquivo);

        fclose(arquivo);
        return 0;
    }