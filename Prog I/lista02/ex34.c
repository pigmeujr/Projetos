#include <stdio.h>

int main() {
    float indice;
    printf("Digite o indice:");
    scanf("%f",&indice);
    if (indice>=0.05 && indice<=0.29){ 
    printf("Considerar aceitavel");
    }
    if (indice>=0.3 && indice<=0.4){  
    printf("Suspender atividades do grupo 1");
    }
    if (indice>=0.4 && indice<=0.5){
        printf("Suspender atividades dos grupos de 1 e 2");
    }else{
        printf("Suspender atividades de todos os grupos");
    }


}