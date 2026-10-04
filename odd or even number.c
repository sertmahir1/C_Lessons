#include<stdio.h>
#include<stdlib.h>

int main(){
int num1;
printf("Enter a number:");
scanf("%d",&num1);
if(num1%2==1){
    printf("%d this number is a odd number.",num1);
}
else{
    printf("%d this number is a even number.",num1);
}
return 0;
}
