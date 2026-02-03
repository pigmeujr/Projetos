#include <stdio.h>

int main(){
    float media;
    int conceito;
    printf("Digite sua media:");
    scanf("%f",&media);
        if (media>=0 && media<=4.9){ 
        conceito=1;
        }else{
            if (media>=5 && media<=6.9){ 
            conceito=2;
            }
            if (media>=7 && media<=8.9){
                conceito=3;
            }else{
                conceito=4;
            }
        }
        switch (conceito){
            case 1:
            printf("Conceito D");
            break;
            case 2:
            printf("Conceito C");
            break;
            case 3:
            printf("Conceito B");
            break;
            default:
            printf("Conceito A");
            break;
        }
}