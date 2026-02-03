#include <stdio.h>

int main() {
    float nota1,nota2,nota3,media;
    printf("Digite as tres notas do aluno:");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    media = (nota1+nota2+nota3)/3;
    media>=6? printf("Aprovado"): printf("Reprovado");
}