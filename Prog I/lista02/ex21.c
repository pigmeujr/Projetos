#include <stdio.h>

int main() {
    int a,b;
    printf("Digite dois valores:");
    scanf("%d %d",&a,&b);
    if (a%b==0){
        printf("Sao multiplos");
    }else{
        printf("Nao sao multiplos");
    }

}