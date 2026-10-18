#include<stdio.h>
#include<stdlib.h>

int main(){
int num1;
int i=2;
printf("Enter a number:");
scanf("%d",&num1);
if(num1<0){
    printf("please enter a pozitive number.");
}
while(i<num1/2){
    if(num1%i==0){
        printf("%d is not a privite number.",num1);
        return 0;
    }
    i++;
}
printf("&d is a privite number.",num1);

}
