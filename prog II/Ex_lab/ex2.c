#include <stdio.h>

    int main(){

        int vendas[10],i,posicao=0;
        float preco[10],soma,total=0,comissao,maior=-500;

        for (i = 0; i < 5; i++){
            printf("---------- Produto %d ----------\n",i+1);
            printf("Informe o valor unitario do produto:");
            scanf("%f",&preco[i]);
            printf("Informe a quantidade vendida do produto:");
            scanf("%d",&vendas[i]);
            if(vendas[i]>maior){
                maior=preco[i];
                posicao=i;
            }
        }

        printf("\n---------- Relatorio ----------\n");
        for (i = 0; i < 5; i++){
            soma= vendas[i]*preco[i];
            total+=soma;
            comissao=(total*5)/100;
            printf("Produto %d, Quantidade %d, Valor unitario: R$%.2f, Valor Total: R$: %.2f\n",i+1,vendas[i],preco[i],soma);
        }

        printf("\nValor Geral das Venda: R$ %.2f\n",total);
        printf("Valor da comissao: R$ %.2f\n",comissao);
        printf("Valor do objeto mais vendido: R$ %.2f, Posicao no vetor: %d",maior,posicao);
        
    }