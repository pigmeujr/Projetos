#include <stdio.h>

int main(){
    int salario=200,produtos,salario_total;
    printf("Digite o valor vendido em produtos:");
    scanf("%d",&produtos);
        if (produtos<=1000){   
        salario_total = salario+(produtos*9)/100;
            printf("Seu salario eh %d",salario_total);
        }else{  
            salario_total = salario+800;
                printf("Seu salario eh %d",salario_total);
            }   
        
}