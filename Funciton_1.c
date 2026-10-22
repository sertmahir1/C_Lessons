#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void myMessage(){
printf("hello c this is a funciton\n");
}
void nameList(char name[],int age){
    printf("Hello %s your age is:%d",name,age);
}
int main(){
myMessage();
nameList("Mahir",20);
return 0;

}
