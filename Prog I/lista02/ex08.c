#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Digite tres numeros: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2&& num1>num3){   
    printf("O %d eh o maior numero",num1);
    }
    else{
        if (num2>num1 && num2>num3){
            printf("O %d eh o maior numero",num2);
        }
        else{
            printf("O %d eh o maior numero",num3);
        }
    }

}