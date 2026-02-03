#include <stdio.h>

int pot(int x, int z){
    int potencia=1;
    while (z>0){
        potencia=potencia*x;
        z--;
    }
    
    return potencia;
}

int main(){

    int num1,num2;

    printf("Digite dois numeros:");
    scanf("%d %d",&num1,&num2);

    printf("%d",pot(num1,num2));
}