#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,area,semiperimetro;
    printf("Digite tres medidas:");
    scanf("%f %f %f",&a,&b,&c);
        if (a + b > c && a + c > b && b + c > a){
            if (a==b && a==c && b==c){
                printf("Triangulo equilatero");
            }
        }else{ 
            if (a==b && a!=c && b!=c || b==c && a!=b && a!=c || c==a && c!=b && b!=a){
                printf("Triangulo isoceles");
            } else{
                printf("Triangulo escaleno");
            }
        }
        
}            