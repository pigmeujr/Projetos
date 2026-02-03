#include <stdio.h>

    int main(){

        int i;
        char a[50],b,c;

        printf("Digite a letra L1 e L2:");
        scanf(" %c %c",&b,&c);
        getchar();
        
        printf("Digite sua palavra:");
        fgets(a,50,stdin);

        for (i = 0; a[i]!='\0'; i++){
            if (a[i]=='\n'){
                a[i]='\0';
                break;
            }
            if(a[i]==b){
                a[i]=c;
            }
            printf("%c",a[i]);
        }
    }