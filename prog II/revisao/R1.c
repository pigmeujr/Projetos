#include <stdio.h>

    int main() {

        int a,b,i;
        printf("Digite dois intervalos: ");
        scanf("%d %d",&a, &b);

        for (i = a; i <=b; i++){
         printf("Numero: %d\n", i);

        if(i % 2 != 0){
        printf("  -> Impar\n");
        }

        if(i % 2 != 0 && i % 3 == 0){
        printf("  -> Impar e multiplo de 3\n");
        }

        }
}