#include <stdio.h>

    int main(){

        int i,j,igual=1;
        char a[50],b[50];

        printf("Entre com a primeira string:");
        fgets(a,50,stdin);

        printf("Entre com a segunda string:");
        fgets(b,50,stdin);

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
        for (i = 0; a[i] != '\0' || b[i]!='\0'; i++){
            if(a[i]!=b[i]){
                igual=0;
            } 
        }

        if(igual==1){
            printf("Sao iguais");
        } else{
            printf("Sao diferentes");
        }
        
    }