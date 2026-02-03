#include <stdio.h>

    int main(){

        int i;
        char a[50];

        printf("Digite numeros:");
        fgets(a,50,stdin);

        for (i = 0; a[i] !='\0' ; i++){
            if (a[i] == '\n') {
                a[i] = '\0';
                break;
            }
            if(a[i]=='0'){
                a[i]='1';
            }
        }
        printf("substituindo %s",a);
        
    }