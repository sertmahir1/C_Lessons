#include<stdio.h>
#include<stdlib.h>

int main(){
int partyA,partyB,partyC,curretCouncilor;
const int sumCouncilor=600;
printf("Meclisde ki partilerin üye sayilarini giriniz:");
scanf("%d %d %d",&partyA,&partyB,&partyC);
curretCouncilor=partyA+partyB+partyC;

if(curretCouncilor<200){
    printf("yeterli meclis uyesi yoktur,oturum baslatilamaz.\n");
    printf("Oturuma ara verildi.\n");
    printf("Meclis uye sayiyi 200 olmalidir.");
}
else{
    printf("meclis toplantiya hazir.");
}
return 0;

}
