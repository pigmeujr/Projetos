#include <stdio.h>

int sinal(int n){
    if(n>0){
        return printf("Positivo");
    } if(n==0){
        return printf("Zero");
    } else{
        return printf("Negativo");
    }
}
int main(){
    int x,resultado;
    scanf("%d",&x);
    resultado=sinal(x);
}