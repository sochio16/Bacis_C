#include<stdio.h>
int main(){
    printf("2*4*6*...*n\n");
    int i,n,sum=1;
    printf("Input n=");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
    sum=sum*i;
}
printf("sum=%d",sum);
    return 0;
}
