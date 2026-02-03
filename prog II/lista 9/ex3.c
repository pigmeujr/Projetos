#include <stdio.h>

int verifica(int x){
    if (x<0){
        return -1;
    } else if(x>0){
        return 1;
    } else{
        return 0;
    }
}

    int main(){

        int num;
        printf("Digite um numero:");
        scanf("%d",&num);
        
        printf("%d\n", verifica(num));
    }