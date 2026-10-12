#include<stdio.h>
#include<sdtlib.h>

int main(){
int dizi2[4]={6,5,7,4};
int n=sizeof(dizi2)/sizeof(dizi2[0]);

printf("Orjinal dizi:");
for(int i=0;i<n;i++){
    printf("%d",dizi2[i]);
}
printf("\n");

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(dizi2[j]<dizi2[j+1]){
            int temp2=dizi2[j];
            dizi2[j]=dizi2[j+1];
            dizi2[j+1]=temp2;
        }
    }
}
printf("Tersten sirali dizii:");

for(int i=0;i<n;i++){
    printf("%d",dizi2[i]);
}
return 0;
}
