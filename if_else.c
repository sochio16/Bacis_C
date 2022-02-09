#include <stdio.h>
int main(){
int num;
printf("Input Number=");
scanf("%d",&num);
if(num>0)
{
    printf("you Input positive number");
}
else if (num<0)
{
    printf("you Input Negative number");
}
else
{
    printf("you Input zero number");
}
    
    return 0;

}
