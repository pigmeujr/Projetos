#include <stdio.h>

int main(){
    int a,b;
    printf("Digite dois valores inteiros:");
        scanf("%d %d",&a,&b);
    while (a<=b){
        if(a%3==0){
            printf("%d ",a);
        }
        a++;
    }
    
}