#include<stdio.h>
#include<stdlib.h>

int main(){
int mynumber;
printf("Enter a number:");
scanf("%d",&mynumber);

if(mynumber>0){
    if(mynumber==100){
        printf("Your number is a incredible number\n\n");
    }
    else{
        printf("this number is a pozitive number but isn't incredible number");
    }
}
else if(mynumber<0){
    printf("this number is negaitfe number");
}
else{
    printf("this number equals to zero");
}
return 0
;
}
