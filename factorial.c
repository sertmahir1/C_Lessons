#include<stdio.h>
#include<stdlib.h>

int main(){
int number,factorial;
printf("Enter a number:");
scanf("%d",&number);
factorial=1;
for(int i=number;i>0;i--){
    factorial=factorial*i;
}
printf("Factorial is:%d",factorial);
return 0;

}
