#include <stdio.h>

int main() {
    float dinheiro;
    printf("Quanto dinheiro voce tem: \n");
    scanf("%f",&dinheiro);
    if (dinheiro >= 200){
        printf("Voce pode ir no restaurante tche");
    }
    else{
        printf("Vai comer no Sebosao");
    }
}
