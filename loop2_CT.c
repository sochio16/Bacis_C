#include<stdio.h>
int main(){
    printf("5+6+7+...+n\n");
    int i,n,sum=0;
    printf("Input n=");
    scanf("%d",&n);
    for(i=5;i<=n;i++){
    sum=sum+i;
}
printf("sum=%d",sum);
    return 0;
}
