#include<stdio.h>
#include<stdlib.h>

int main(){
int num1,num2,num3,num4;
num1=0;
num2=0;
num3=0;
num4=0;

printf("please enter four number:");
scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
printf("the square and cube of number1:");

printf("%d\t",num1*num1);
printf("%d\t\t",num1*num1*num1);


printf("the square and cube of number2:");

printf("%d\t\t",num2*num2);
printf("%d\t\t",num2*num2*num2);


printf("the square and cube of number3:");

printf("%d\t\t",num3*num3);
printf("%d\t\t",num3,num3,num3);
printf("the square and cube of number4:");

printf("%d\t\t",num4*num4);
printf("%d\t\t",num4*num4*num4*num4);

return 0;
}
