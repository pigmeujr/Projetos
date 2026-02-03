#include <stdio.h>
#include <math.h>


    int main(){
        int x,z,pot;

        printf("Digite a base e o expoente respectivamente:");
        scanf("%d %d",&x,&z);
        pot=pow(x,z);
        printf("%d",pot);
    }