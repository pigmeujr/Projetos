#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if (num>80){
        printf("O numero eh maior que 80");
    }
    else{
        if (num<25){
            printf("O numero eh menor que 25");
        }
        if (num ==40){
            printf("O numero eh igual a 40");
        }
    }
}