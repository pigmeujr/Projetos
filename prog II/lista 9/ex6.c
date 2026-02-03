#include <stdio.h>

int converte(int horas, int minutos, int segundos){
    int conta;
    conta = horas*3600;
   conta = conta+(minutos*60);
   conta = conta + segundos;
    return conta;
}

    int main(){

        int x,y,z;

        printf("Digite as horas, minutos e segundos");
        scanf("%d %d %d",&x,&y,&z);

        printf("Tem %d segundos",converte(x,y,z));
    }