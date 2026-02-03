#include <stdio.h>

void maior(int x, int y){
    if(x>y){
        printf("O maior eh %d",x);
    } else{ 
        printf("O maior eh %d",y);
    }
}


    int main(){

        int num1,num2;

        printf("Digite dois numeros:");
        scanf("%d %d",&num1,&num2);

        maior(num1,num2);
        return 0;
    }