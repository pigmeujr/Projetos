#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,delta,baskhara1,baskhara2;
    printf("Digite o valor de a, b e c:");
    scanf("%d %d %d",&a,&b,&c);
    delta = b*b - 4*a*c;
    baskhara1 = ((b*-1) + sqrt(delta))/(2*a);
    baskhara2 = ((b*-1) - sqrt(delta))/(2*a);
    printf("Os resultados sao %d e %d",baskhara1,baskhara2);

}