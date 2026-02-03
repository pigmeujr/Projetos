#include <stdio.h>

void desenhaLinha(int x){
    for (int i = 0; i < x; i++){
        printf("=");
    }
}

    int main(){

        int qtd;

        printf("Digite a quantidade:");
        scanf("%d",&qtd);

        desenhaLinha(qtd);
    }