#include<stdio.h>
int main(){
    
    int first,second,max;
    printf("============INPUT==================\n");
    
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);
    printf("==============OUTPUT=============\n");
    if(first>second){
        printf("Maximum is %d",first);
    }
    else
    {
        printf("Mininmum is %d",second);
    }
    
    return 0;
  
}