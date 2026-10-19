#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

setlocale(LC_ALL,"turkish");
int n;
printf("Diziniz boyutu ne kadar olsun istiyorsunuz?:");
scanf("%d",&n);
int* arr=(int*)malloc(n*sizeof(int));
if(arr==NULL){
    printf("Bellek ayrýmýnda hata oluþtu!!!");
    return 1;
}
for(int i=1;i<=n;i++){
    printf("arr[%d]:",i);
    scanf("%d",&arr[i]);
}
printf("Girilen dizinin elemanlarý:");
for(int i=1;i<=n;i++){
    printf("%d\n",arr[i]);
}
printf("\n\n");
free(arr);
return 0;

}
