#include<stdio.h>
#include<stdlib.h>

int main(){
int number1,number2,preference;
printf("Enter Number1:");
scanf("%d",&number1);
printf("Enter Number2:");
scanf("%d",&number2);
printf("Enter Preference:");
scanf("%d",&preference);

int addition=1;
int Subtraction=2;
int multiplication=3;
int division=4;

if(preference==1){
        int add=number1+number2;
    printf("The addition of %d and %d is:%d",number1,number2,add);
}
else if(preference==2){
    int sub=number1-number2;
    printf("The subtraction of %d and %d is:%d",number1,number2,sub);
}
else if(preference==3){
    int multi=number1*number2;
    printf("The multiplication of %d and %d is:%d",number1,number2,multi);
}
else{
    int div=number1/number2;
    printf("The division of %d and %d is:%d",number1,number2,div);
}
return 0;

}
