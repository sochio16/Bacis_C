#include<stdio.h>
int main(){
    printf("1+3+5+...+n\n");
    int i,n,sum=0;
    printf("Input n=");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
    sum=sum+i;
}
printf("sum=%d",sum);
    return 0;
}
