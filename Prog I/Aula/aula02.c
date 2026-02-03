#include <stdio.h>

int main(){
    int numero;
    printf("Digite a senha \n");
    scanf("%d",&numero);
    if (numero < 0 || numero > 5000){
        printf("Digite um numero ate 5000");
        return 0;
    }    
    
    if (numero == 2908){
        printf("Parabens voce acertou");
    }
    else{
        if (numero > 2908){
            printf("O numero digitado eh maior que a senha");
        }
        else{
            printf("O numero digitado eh menor");
        }
    }
}