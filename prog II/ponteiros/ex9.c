#include <stdio.h>

    int main(){

        int vet[]={1,2,3,4,5,6,7,8,9,10},*p,*b,temp;

        p=vet;
        b=vet+4;
        
        temp=b-p;
        
        printf("%d",temp);
        
    }