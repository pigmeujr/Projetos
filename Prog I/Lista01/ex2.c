#include <stdio.h>
int main() {
    int n1,antecessor,sucessor;
    printf("Escreva um numero\n");
    scanf("%d",&n1);
    antecessor = n1-1;
    sucessor = n1+1;
    printf("Seu antecessor eh  %d\n",antecessor);
    printf("Seu sucessor eh  %d\n",sucessor);

}