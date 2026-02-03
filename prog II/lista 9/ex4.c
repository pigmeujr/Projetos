#include <stdio.h>
#include <math.h>
int quadrado_perfeito(int x){
    if(x<0){
        return 0;
    } 
    
        int raiz =(int) sqrt(x);
        if (raiz*raiz==x){
            return 1;
        } else{
            return 0;
        }
}


    int main(){

        int num, resultado;

        printf("Digite um numero:");
        scanf("%d",&num);
        resultado=quadrado_perfeito(num);

        if(resultado==1){
            printf("Quadrado perfeito");
        } else{
            printf("Nao eh quadrado perfeito");
        }
    }