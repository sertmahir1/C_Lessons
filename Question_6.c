#include<stdio.h>
#include<stdlib.h>

int main(){
int score;
printf("Enter a score:");
scanf("%d",&score);
if(score>=90 && score<=100){
    printf("Letter Grade: A");
}
else if(score>=80 && score<=89){
    printf("Letter Grade: B");
}
else if(score>=70 && score<=79){
    printf("Letter Grade: C");
}
else if(score>=60 && score<=69){
    printf("Letter Grade: D");
}
else{
    printf("Letter Grade: F");
}
return 0;
}
