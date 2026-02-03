#include <stdio.h>

int main (){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if ( num%10==0){
        printf("O numero eh divisivel por 10");
    }
    if (num%5==0){
        printf("\nO numero eh divisivel por 5");
    }
    if (num%2==0){
        printf("\nO numero eh divisivel por 2");
    }
    
}