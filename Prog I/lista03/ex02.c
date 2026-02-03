#include <stdio.h>

int main(){
    int n,b,v=0;

    printf("Digite uma quantidade de numeros:");
    scanf("%d",&n);
    while (v<n){
        printf("Digite o numero:");
        scanf("%d",&b);
        printf("triplo %d\n",b*3);
        v++;
        
    }
}