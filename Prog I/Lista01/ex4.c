#include <stdio.h>
int main () {
    int n1,n2,n3,media;
    printf("Digite o primeiro numero \n");
    scanf("%d",&n1);
    printf("Digite o segundo numero \n");
    scanf("%d",&n2);
    printf("Digite o terceiro numero \n");
    scanf("%d",&n3);
    media=(n1+n2+n3)/3;
    printf("A media eh %d",media);
}