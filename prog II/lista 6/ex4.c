#include <stdio.h>

    int main(){
        char a[20];
        int i,cont=0;

        printf("Digite um nome:");
        fgets(a,20,stdin);
        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] == '\n') {
                a[i] = '\0';
                break;
            }
        }
            for (i = 0; a[i]!='\0'; i++){
                if(a[i]!='\0'){
                cont++;
            }
            }
    printf("Tem %d letras",cont);
}