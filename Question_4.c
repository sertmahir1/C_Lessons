#include<stdio.h>
#include<stdlib.h>

int main(){
int number1,number2;

printf("Enter number1:");
scanf("%d",&number1);

printf("Enter number2:");
scanf("%d",&number2);

if(number1==number2){
    printf("Number1 and Number2 are equal.");
}
else{
    printf("Number1 and Number2 are not equal.");
}
return 0;
}
