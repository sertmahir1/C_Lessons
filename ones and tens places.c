#include<stdio.h>
#include<stdlib.h>

int main(){
int number,first,second;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&number);

first=number%10;
second=(number%100)/10;
printf("Birler basamagi:%d\n\n",first);
printf("Onlar basamaginda ki sayi:%d\n\n",second);
return 0;

}
