#include <stdio.h>

    int main(){
        
        int i;
        char a[50];

        printf("Digite uma palavra:");
        fgets(a,50,stdin);

        for (i = 0; a[i]!='\0'; i++){
            if (a[i]=='\n'){
                a[i]='\0';
                break;
            }
            if (a[i] >= 'a' && a[i] <= 'z') {
                printf("%c", a[i] - 32);
            } else {
                printf("%c", a[i]);
            }
        }
    }