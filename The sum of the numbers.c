#include<stdio.h>
#include<stdlib.h>

int main(){

int sum,bolum,number,kalan;
printf("4 basamakli bir sayi giriniz:");
scanf("%d",&number);
sum=0;

//4.basamakta ki sayýyý bulmamiz icin;
bolum=number/1000;
sum+=bolum;
kalan=number%1000;

//3.basamakta ki sayiyi bulmak icin;
bolum=number/100;
sum+=bolum;
kalan=number%100;

//2.basamakta ki sayiyi bulmamiz icin;
bolum=kalan/10;
sum+=bolum;
kalan=kalan%10;

//1.basamakta ki sayiyi bulmamýz icin;
sum+=kalan;

printf("Girilen sayinin rakamlarinin toplamý:%d",sum);
return 0;

}
