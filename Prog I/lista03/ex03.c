#include <stdio.h>

int main(){
    int n,i=0,num;
    printf("Digite a quantidade de numeros:");
    scanf("%d",&n);
    while (i<n){
        printf("Digite o numero:");
        scanf("%d",&num);
        if(num<0)
        printf("Negativo\n");
        if(num>0)
        printf("Positivo\n");
        i++;
    }
    
}