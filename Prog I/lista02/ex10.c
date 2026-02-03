#include <stdio.h>

int main () {
    int num1,num2;
    printf("Digite dois numeros: ");
    scanf("%d %d",&num1,&num2);
    if (num1*num1< num2*num2){
        printf("O quadrado do numero %d eh menor",num1);
    }
    else{
        printf("O quadrado do numero %d eh menor",num2);
    }
}