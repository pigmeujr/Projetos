#include <stdio.h>

int main(){
    char opcao;
    float nota1,nota2,nota3,media;
    printf("Digite as tres notas:");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    
    printf("Digite o tipo de media (a ou p):");
    scanf(" %c",&opcao);
        
    switch (opcao){
        case 'a':
        media = (nota1+nota2+nota3)/3;
        printf("A media eh %.2f",media);
        break;
        
        case 'p':
        media = (((nota1*3)+(nota2*3)+(nota3*4))/10);
        printf("A media eh %.2f",media);
        break;

        default:
        printf("Opcao invalida");
        break;

    }

}