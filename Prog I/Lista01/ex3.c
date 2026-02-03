#include <stdio.h>
int main() {
    int n1,antecessor,sucessor;
    printf("Escreva um numero\n");
    scanf("%d",&n1);
    antecessor = n1-1;
    sucessor = n1+1;
    printf("Antecessor de %d eh:  %d\n",n1, antecessor);
    printf("Sucessor de %d eh:  %d",n1, sucessor);

}