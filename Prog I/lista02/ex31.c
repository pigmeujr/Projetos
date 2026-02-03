#include <stdio.h>

int main(){
    int consumo;
    float custoagua,esgoto,conta;
    printf("Digite o consumo de agua:");
    scanf("%d",&consumo);
    if (consumo >= 0 && consumo <= 10){
        custoagua = consumo*0.69;
        esgoto = custoagua*1.25;
        conta = esgoto+5;
        printf("O valor da conta eh %.2f",conta);
    }else if (consumo >= 11 && consumo <= 15){
        custoagua = consumo*1.17;
        esgoto = custoagua*1.25;
        conta = esgoto+5;
        printf("O valor da conta eh %.2f",conta);
    }else if (consumo >= 16 && consumo <= 25){
        custoagua = consumo*1.48;
        esgoto = custoagua*1.25;
        conta = esgoto+5;
        printf("O valor da conta eh %.2f",conta);
    }else{
        custoagua = consumo*1.6;
        esgoto = custoagua*1.25;
        conta = esgoto+5;
        printf("O valor da conta eh %.2f",conta);
    }
    
    
}
    