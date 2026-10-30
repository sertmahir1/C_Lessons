#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Numbers from 0 to 10:\n");
    int i=0;
    while(i<=10){
        printf("%d ",i);
        i++;
    }
    printf("\n");
    printf("Numbers from 10 to 0:\n");
    int j=10;
    while(j>=0){
        printf("%d ",j);
        j--;
    }
    return 0;
}
