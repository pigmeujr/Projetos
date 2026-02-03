#include <stdio.h>
int main () {
    int nota1,nota2,media;
    printf("Digite a primeira nota \n");
    scanf("%d",&nota1);
    printf("Digite a segunda nota \n");
    scanf("%d",&nota2);
    media=((nota1*3)+(nota2*7))/10;
    printf("A media eh %d",media);
}