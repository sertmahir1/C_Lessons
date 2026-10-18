#include<stdio.h>
#include<stdlib.h>

int main(){
double wheat=1;
double sumwheat=0;
for(int i=1;i<=64;i++){
    printf("\n%d. kare icin bilgine verilicek bugday sayisi:%20.0f",i,wheat);
    sumwheat +=wheat;
    wheat*=2;
}
printf("\n bilgine verilicek bugday sayisi:%20.0f\n",sumwheat);
return 0;

}
