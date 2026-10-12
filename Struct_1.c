#include<stdio.h>
#include<stdlib.h>

struct students{
char myletter;
char*name;
char*lastname;
int no;
double gano;
};

int main(){
struct students x1;

x1.myletter='M';
x1.name="Mahir Mushab";
x1.lastname="Sert";
x1.no=1907;
x1.gano=3.47;
//----------------------
printf("Letter:%c\n",x1.myletter);
printf("Name:%s\n",x1.name);
printf("Lastname:%s\n",x1.lastname);
printf("No:%d\n",x1.no);
printf("Gano:%.2f",x1.gano);
return 0;

}
