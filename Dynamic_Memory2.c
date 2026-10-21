#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    int n,new_size;
    printf("Kaç elemanlýk bir dizi oluþturmak istiyorsunuz:");
    scanf("%d",&n);
    int* arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("Bellek ayrýmýnda bir hata oluþtu.");
        return 1;
    }
    for(int i=1;i<=n;i++){
        printf("arr[i]:");
        scanf("%d",&arr[i]);
    }
    printf("Mevcut Diziniz:");
    for(int j=1;j<=n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    printf("Kaç eleman eklemek istiyorsunuz:");
    printf("%d",&new_size);
    arr=(int*)realloc(arr,new_size*sizeof(int));
    if(arr==NULL){
        printf("Bellek ayrýmýnda hata oluþtu:");
        return 1;
    }
    for(int i=1;i<=new_size;i++){
        printf("arr[%d]:");
        scanf("%d",arr[i]);
    }
    free(arr);
    return 0;

}
