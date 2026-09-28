#include<stdio.h>
#include<stdlib.h>

int main(){
float r,circumference,area;
const float PI=3.1415;
printf("please enter the radius=");
scanf("%f",&r);
area=PI*r*r;
circumference=2*PI*r;

printf("area is circle:%f",area);
printf("\n");
printf("circumference is circle:%f",circumference);

return 0;



}
