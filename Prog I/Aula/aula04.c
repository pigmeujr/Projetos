#include <stdio.h>

int main(){
    int idade;
    printf("Digite a idade da criança \n");
    scanf("%d",&idade);
    idade>12 ? printf("A criança pode usar o brinquedo do parque"): printf("A criança não pode usar o brinquedo do parque");
}