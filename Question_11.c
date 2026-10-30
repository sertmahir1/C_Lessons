#include <stdio.h>
#include <stdlib.h>

int main(){
    int multi=1;
    for(int i=1;i<=5;i++){
        multi=multi*i;
    }
    printf("Product of numbers from 1 to 5 is:%d",multi);
    return 0;
}
