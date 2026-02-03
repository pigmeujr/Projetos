#include <stdio.h>

    int main(){

        int a=1,*b,**c;

        b=&a;
        c=&b;

        printf("%d",**c);

        
    }