#include<stdio.h>
#include<stdlib.h>
//Girilen notlarý toplayýp ortalamasýný bulan program.
int main(){
int i;
float sumGrade,examGrade;
i=1;
examGrade=0.0;
average=0.0;

do{
    printf("%dth exam grade:",i);
    scanf("%f",&examGrade);
    if(examGrade==0){
        break;
    }
    if(examGrade<0){
        printf("Please enter pozitive number!");
        continue;
    }
    else{
        sumGrade+=examGrade;
    }
    i++;
}
while(examGrade!=0);

printf("\nyou entered %d exam grade:",i-1);
printf("average:%f\n",sumGrade/(i-1));
return 0;




}
