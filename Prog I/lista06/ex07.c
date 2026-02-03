#include <stdio.h>

void situacao (float n1, float n2, float n3, int faltas){
    float media=(n1+n2+n3)/3;
    if(faltas > 18) {
        printf("REPROVADO POR FALTA\n");
    } else {
        if(media >= 6.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }
}
int main(){
    float n1,n2,n3;
    int aux;
    printf("Digite as notas do aluno e o numero de faltas:");
    scanf("%f %f %f %d",&n1,&n2,&n3,&aux);
    situacao(n1,n2,n3,aux);
    
}