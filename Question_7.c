#include<stdio.h>
#include<stdlib.h>

int main(){
int score,wage;
printf("Enter score:");
scanf("%d",&score);
printf("Enter wage:");
scanf("%d",&wage);

if(score>=70){
    if(wage<=20000){
        printf("The student is eligible for the scholarship.");
    }
    else{
        printf("The student is not eligible for the scholarship.");
    }
}
else{
    printf("The student is not eligible for the scholarship.");
}
return 0;
}
