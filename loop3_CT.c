#include<stdio.h>
int main(){
    printf("1*2*3*...*n\n");
    int i,n,sum=1;
    printf("Input n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum=sum*i;
}
printf("sum=%d",sum);
    return 0;
}
