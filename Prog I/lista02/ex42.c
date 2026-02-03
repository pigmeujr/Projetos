#include <stdio.h>

int main(){
    int x,total;
    printf("Digite o valor de x:");
    scanf("%d",&x);
    if (x<=1){
        printf("F(x) = 1");
    } else if (x>1 && x<=2){
        printf("F(x) = 2");
    } else if (x>2 && x<=3){
        total = x*x;
        printf("F(x) = %d",total);
    }else{
        total = x*x*x;
        printf("F(x) = %d",total);
    }
}