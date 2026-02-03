#include <stdio.h>

    int main(){

        int x,y,*a,*b,soma=0;

        printf("Digite 2 numeros:");
        scanf("%d %d",&x,&y);

        a=&x;
        b=&y;

        soma=*a+*b;

        printf("Soma eh %d",soma);
    }