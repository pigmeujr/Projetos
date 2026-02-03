#include <stdio.h>

    int main(){
        FILE* arquivo = fopen("entrada.txt","r");
        char linha[100];
        int i;
        if(arquivo==NULL){
            printf("Erro ao abrir o arquivo");
            return(1);
        }
        while (fscanf(arquivo, "%s", linha) == 1) {
            i=0;
            while (linha[i] != '\0') {
                i++;
            }
            printf("'%s' tem %d letras\n", linha, i);
            }
    }