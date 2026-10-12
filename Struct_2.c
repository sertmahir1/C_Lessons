#include<stdio.h>
#include<stdlib.h>

struct students{
char* Name;
char* Lastname;
char* Saculty;
char* Section;
double Gano;
};
int main(){
struct students x1;
struct students x2;
struct students x3;

x1.Name="Mahir Mushab";
x1.Lastname="Sert";
x1.Saculty="Engineering";
x1.Section="Computer Engineering";
x1.Gano=3.45;

x2.Name="Serkan";
x2.Lastname="Sert";
x2.Saculty="Arts and Sciences";
x2.Section="History teacher";
x2.Gano=3.60;

x3.Name="Emine";
x3.Lastname="Sert";
x3.Saculty="Faculty of Health Sciences";
x3.Section="Nurse";
x3.Gano=3.60;

printf("Name:%s\n",x3.Name);
printf("Lastname:%s\n",x3.Lastname);
printf("Seculty:%s\n",x3.Saculty);
printf("Section:%s\n",x3.Section);
printf("Gano:%.2f",x3.Gano);

printf("\n\n");

printf("Name:%s\n",x2.Name);
printf("Lastname:%s\n",x2.Lastname);
printf("Seculty:%s\n",x2.Saculty);
printf("Section:%s\n",x2.Section);
printf("Gano:%.2f",x2.Gano);

printf("\n\n");

printf("Name:%s\n",x1.Name);
printf("Lastname:%s\n",x1.Lastname);
printf("Seculty:%s\n",x1.Saculty);
printf("Section:%s\n",x1.Section);
printf("Gano:%.2f",x1.Gano);

return 0;
}
