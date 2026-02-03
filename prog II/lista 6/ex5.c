#include <stdio.h>

    int main(){

        struct forms{ 
        char nome[20];
        char sexo[20];
        int idade;
        };

        struct forms c;
        printf("Digite seu nome:");
        fgets(c.nome,20,stdin);
        printf("Digite seu sexo:");
        fgets(c.sexo,20,stdin);
        printf("Digite sua idade:");
        scanf("%d",&c.idade);
        for (int i = 0; c.sexo[i]!='\0'; i++){
            if (c.sexo[i] == '\n') {
                c.sexo[i] = '\0';
                break;
            } if(c.sexo[i]=='feminino' || c.sexo[i]=='Feminino' && c.idade>25){
                printf("Aceita");
            } else{
                printf("Nao aceita");
            }
        }
        
    }