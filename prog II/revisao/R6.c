#include <stdio.h>

    int main(){

        float soma=0,divisao,i,x=1;

        for (i = 1; i <=50; i++){
            divisao=x/i;
            soma+=divisao;
            x+=2;
            printf("%f\n",divisao);
        }
        printf("%f\n",soma);
    }