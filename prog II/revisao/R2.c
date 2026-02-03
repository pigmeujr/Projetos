#include <stdio.h>

    int main() {

        int n,a,b,i=0;

        printf("Digites quantos numeros vai usar:");
        scanf("%d",&n);

        while (i<n){
            printf("Digite os numeros:");
            scanf("%d",&a);
            b=a*3;
            printf("O triplo eh %d\n",b);
            i++;
        }
        

    }