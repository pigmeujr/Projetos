#include <stdio.h>

    typedef struct {
        char iden[50];
        float taxa;
        int meses;
        float multa;
    } calculo;
    
    int main(){

        calculo c;
        
            while (1){ 
            
            printf("Digite a identificacao da casa:");
            getchar();
            fgets(c.iden,50,stdin);

            if (c.iden[0]=='X'&&c.iden[1]=='X'&&c.iden[2]=='X'&& (c.iden[3]=='\n'||c.iden[3]=='\0')){
                break;
            }
            printf("Digite o valor do imposto:");
            scanf("%f",&c.taxa);

            printf("Digite os meses em atraso:");
            scanf("%d",&c.meses);

            c.multa=(c.taxa*0.01)*c.meses;
            
            printf("\n--- Resultado ---\n");
            printf("Identificacao: %s", c.iden);
            printf("Valor do imposto: %.2f\n", c.taxa);
            printf("Meses em atraso: %d\n", c.meses);
            printf("Multa a pagar: %.2f\n\n", c.multa);
        
        
        
    }
}