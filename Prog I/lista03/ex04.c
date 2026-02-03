#include <stdio.h>

int main(){
    int n,qtd=0,i=0,num;
    printf("Digite uma quantidade de numeros:");
    scanf("%d",&n);
    while (i<n){
        printf("Digite o numero:");
        scanf("%d",&num);
        if(num<0){
        qtd+=1;
        }
        i++;
    }
    printf("São %d negativos",qtd);
}