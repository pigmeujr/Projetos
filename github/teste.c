#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char produtos[100];
    int quantidade;
    float valor;
} cadastro;

    int main(){
        
        cadastro cad;
        int x;
        printf("Digite quantos produtos vao ser cadastrados:");
        scanf("%d",&x);

        do{
            printf("Digite o nome do produto:");
            fgets(cad.produtos,100,stdin);

            printf("Digite a quantidade:");
            scanf("%d",&cad.quantidade);
            getchar();

            printf("Digite o valor unitario:");
            scanf("%f",&cad.valor);
            getchar();
        
        } while ();
        
            

        
    }