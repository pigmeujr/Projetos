#include <stdio.h>

int main(){
    float n1,n2,n3,media;
    printf("Digite as tres notas do aluno:");
    scanf("%f %f %f",&n1,&n2,&n3);
    media = (n1+n2+n3)/3;
    if (media>=7){
        printf("Aprovado");
    }else{
        if (media>=5 && media<7){
            printf("Recuperacao");
        }else{
            printf("Reprovado");
        }
    }
}