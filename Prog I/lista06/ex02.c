#include <stdio.h>

int troca(int x,int y){
    return x = y;
}
int main(){
    int x,y,mudanca;

    scanf("%d %d",&x,&y);

    mudanca = troca(x,y);
    printf("O valor de x agora eh %d",mudanca);



}