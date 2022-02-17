#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,jo;
    do{
        printf("\n======= G I O =======\n");
        printf(" 1/ 1 + 4 + 7 +...+n\n");
        printf(" 2/ 1 * 4 * 7 +...+n\n");
        printf(" 3/ 3^1 + 3^2 + 3^3+...+n\n");
        printf(" 4/ 2^4 + 4^4 + 6^4+...+n\n");
        printf(" 5/ sqrt(2) + sqrt(4) + sqrt(6) +...sqrt(n)\n");
        printf(" 6/ sqrt(3) + sqrt(6) + sqrt(9) +...sqrt(n)\n");
        printf(" 7/ sin(0) + sin(1) + sin(2) + ...sin(n)\n");
         printf(" 8/ cos(0) + cos(1) + cos(2) + ...cos(n)\n");
         printf(" 9/ 1! + 2! + 3! +...+n!\n");
         printf(" 10/ Exit ");
         printf("--------------------------------------------\n");
         printf(" Please Choose One Option =");
         scanf("%d",&jo);
         switch(jo){
             case 1:{
                 int sum=0;
                 printf(" 1/ 1 + 4 + 7 +...+n\n");
                 printf("Input n=");scanf("%d",&n);
                 for(i=1;i<=n;i+=3){
                     sum=sum+i;
                 }    
                 printf("\n Sum =%d\n",sum);
             }break;

         
         
    
        return 0;
}