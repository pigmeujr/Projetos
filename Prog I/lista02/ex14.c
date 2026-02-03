#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    if (idade>=0 && idade<=18){
        printf("Menor de idade");
    }
    else{
        if (idade>=19 && idade<=64){ 
            printf("Maior de idade");
        }else{
            printf("Idosa");
        }
    }

}