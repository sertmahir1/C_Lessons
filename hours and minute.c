#include<stdio.h>
#include<stdlib.h>

int main(){
int saat,dakika,saniye;
printf("lutfen saati giriniz:");
scanf("%d",&saat);
printf("lutfen dakika'yi giriniz:");
scanf("%d",&dakika);

saniye=(saat*3600)+(dakika*60);
printf("saniye:%d",saniye);
return 0;


}
