#include<stdio.h>
#include<stdlib.h>

int main(){
int Height,Width;
float perimeter;
printf("Enter height:");
scanf("%d",&Height);
printf("Enter width:");
scanf("%d",&Width);
perimeter=2*(Height+Width);
printf("Perimeter:%f",perimeter);
return 0;

}
