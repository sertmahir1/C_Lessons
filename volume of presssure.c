#include<stdio.h>
#include<stdlib.h>

int main(){
//basýnc=mol sayýsý*R sabiti*sýcaklýk/hacim
float pressure,constR;
int heat,volume,numberofmoles;
constR=0.82;

printf("Kabin hacmini giriniz:");
scanf("%d",&volume);

printf("Mol sayisini giriniz:");
scanf("%d",&numberofmoles);

printf("Ortam sýcaklýðýný giriniz:");
scanf("%d",&heat);

pressure=(numberofmoles*constR*heat)/volume;

printf("%d Kapta ki gazin basinci:%f\n\n\n",volume,pressure);
return 0;

}
