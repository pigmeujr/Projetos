#include <stdio.h>

int main() {
    int a,b,c,media;
    printf("Digite 3 valores:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        media =((a*5)+(b*2.5)+(c*2.5)/10);
        printf("A media eh %d",media);
    }
    else{
        if (b>a && b>c){
            media = ((a*2.5)+(b*5)+(c*2.5)/10);
            printf("A media eh %d",media);
        }else{
            media = ((a*2.5)+(b*2.5)+(c*5)/10);
            printf("A media eh %d",media);
        }
    }
}