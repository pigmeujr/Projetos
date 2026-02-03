#include <stdio.h>

    int main(){

        int vet[]={1,2,3,4,5},*p;

        p=vet;

        for (int i = 0; i < 5; i++){
            printf("%d\n",*(p+i));
        }
        

    }