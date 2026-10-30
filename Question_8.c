#include <stdio.h>
#include <stdlib.h>

int main(){
int celcilus;
printf("Enter celcilus:");
scanf("%d",&celcilus);
if(celcilus<0){
    printf("Freezing");
}
else if(celcilus>=0 && celcilus<=15){
    printf("Cold");
}
else if(celcilus>=16 && celcilus<=30){
    printf("Cold");
}
else{
    printf("Hot");
}
return 0;
}
