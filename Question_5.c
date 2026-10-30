#include<stdio.h>
#include<stdlib.h>

int main(){
int number1,number2;
printf("Enter Number1:");
scanf("%d",&number1);
printf("Enter Number2:");
scanf("%d",&number2);

if(number1>number2){
    printf("The maximum number is:%d",number1);
}
else{
    printf("The maximum number is:%d",number2);
}
return 0;
}
