#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,area,semiperimetro;
    printf("Digite tres medidas:");
    scanf("%f %f %f",&a,&b,&c);
        if (a + b > c && a + c > b && b + c > a){
        semiperimetro = (a+b+c)/2;
        area = sqrt(semiperimetro*(semiperimetro-a)*(semiperimetro-b)*(semiperimetro-c));
        printf("Os valores formam um triangulo \nA area do triangulo eh %.2f",area);
    }
    else{
        printf("Os valores %.2f, %.2f e %.2f nao formam um triangulo",a,b,c);
    }
}