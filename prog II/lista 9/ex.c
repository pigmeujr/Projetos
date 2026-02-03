#include <stdio.h>

void sla(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            printf("!");
        }
        printf("\n");
    }
    
}

    int main(){
        int x;

        scanf("%d",&x);
        sla(x);
        return 0;

    }