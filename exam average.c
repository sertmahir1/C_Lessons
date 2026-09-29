#include<stdio.h>
#include<stdlib.h>

//Vize Final notlarýnýn hesaplanmasý.

int main(){
int vize,finall,ortalama;
printf("Vize ve Final notlarýný giriniz:");
scanf("%d %d",&finall,&vize);
ortalama=(vize*0.40)+(finall*0.60);
printf("Ortalama:%d",ortalama);
return 0;
}
