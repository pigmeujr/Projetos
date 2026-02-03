#include <stdio.h>

    int main(){

        int x=1,*p;

        p=&x;
        (*p)++;


        printf("%d",*p);
    }