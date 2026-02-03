#include <stdio.h>

int metade(int n){
    return n/2;
}
int main(){
    int x,metadinha;
    scanf("%d",&x);
    metadinha=metade(x);
    printf("A metade eh %d",metadinha);
}