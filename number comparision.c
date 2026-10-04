#include<stdio.h>
#include<stdlib.h>

int main(){
//kullanýcýdan alýnan iki sayýyý karþýlaþtýr.
int num1,num2;
printf("Please enter num1,num2:");
scanf("%d %d",&num1,&num2);
if(num1>num2){
    printf("%d bigger than %d",num1,num2);
}
else if(num1==num2){
    printf("%d equals to %d",num1,num2);
}
else{
    printf("%d lower than %d",num1,num2);
}
return 0;
}
