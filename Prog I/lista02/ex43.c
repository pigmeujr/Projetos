#include <stdio.h>
#include <math.h>
int main(){
    int x;
    float total;
    printf("Digite o valor de x:");
    scanf("%d",&x);
    total = (5*x+3)/sqrt(x-16);
    printf("F(x) = %.2f",total);
}