#include <stdio.h>

    int main(){

        typedef struct {
            int identificacao;
            float valor_imposto;
            int meses;
            float multa;
        }calculo;

        calculo c;

        printf("Digite a identificacao da casa:");
        scanf("%d",&c.identificacao);
        printf("Digite o valor do imposto:");
        scanf("%f",&c.valor_imposto);
        printf("Digite a quantidade de meses em atraso:");
        scanf("%d",&c.meses);

        c.multa=(c.valor_imposto*0.01)*c.meses;

        printf("Imovel:%d\nValor do imposto:%.2f\nMeses em atraso:%d\nValor da multa:%.2f\n",c.identificacao,c.valor_imposto,c.meses,c.multa);
        
        return(0);
        
    }