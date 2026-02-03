#include <stdio.h>

    int main(){

        char a[100];
        char b[100];
        int i,j,igual=0;
        printf("Entre com a primeira string:");
        fgets(a,100,stdin);
        printf("Entre com a segunda string:");
        fgets(b,100,stdin);
            //tirar o \n de a e b
            //caminhar as strings e fazer a comparação delas
            //printar no final se forem iguais
        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] == '\n') {
                a[i] = '\0';
                break;
            }
        }
        for (j = 0; b[j] != '\0'; j++) {
            if (b[j] == '\n') {
                b[j] = '\0';
                    break;
            }
        }
        for (i = 0; a[i] != '\0'; i++) {
            for (j = 0; b[j] != '\0'; j++) {
                if (a[i + j] != b[j]) {
                    break; 
                } 
            }
            if(b[j]=='\0'){
                igual=1;
                break;
            }
        }
        if (igual==1){
            printf("B esta contido em A");
        } else{
            printf("B nao esta contido em A");
        }
        }
