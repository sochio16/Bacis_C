#include<stdio.h>
int main(){
    printf("2+5+8+...+n\n");
    int i,n,sum=0;
    printf("Input n=");
    scanf("%d",&n);
    for(i=2;i<=n;i+=3){
    sum=sum+i;
}
printf("sum=%d",sum);
    return 0;
}
