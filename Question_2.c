#include<stdio.h>
#include<stdlib.h>

int main(){

int age;
double examScore;
float pointAverage;
char section;

printf("Enter age:");
scanf("%d",&age);

printf("\n");

printf("Enter exam score:");
scanf("%f",&examScore);

printf("\n");

printf("Enter GPA:");
scanf("%lf",&pointAverage);

printf("\n");

printf("Enter section:");
scanf(" %c ",&section);

printf("Age:",age);
printf("Exam score:",examScore);
printf("Point Average:",pointAverage);
printf("Section:",section);

return 0;

}
