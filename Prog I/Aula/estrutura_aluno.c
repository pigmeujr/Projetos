#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct estrutura_aluno{
    char nome[50];
    int nota1;
    int nota2;
    int nota3;
    float media;
};

int main(){
    struct estrutura_aluno c[10];
    int i;
    for(i=0;i<10;i++){ 
    scanf("%s",c[i].nome);
    scanf("%d",&c[i].nota1);
    scanf("%d",&c[i].nota2);
    scanf("%d",&c[i].nota3);
    c[i].media = c[i].nota1 + c[i].nota2 + c[i].nota3 / 3;
    printf("A media eh %f",c[i].media);
    }
}