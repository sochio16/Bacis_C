#include<stdio.h>
int main()
{   int x, y,
    printf("============Assign Value============\n");
    x=18;
    y=21;
    printf(" %d > %d = %d\n",x,y,x>y);
    printf(" %d >= %d = %d\n",x,y,x>=y);
    printf(" %d < %d = %d\n",x,y,x<y);
    printf(" %d <= %d = %d\n",x,y,x<=y);
    printf(" %d == %d = %d\n",x,y,x==y);
    printf(" %d != %d = %d\n",x,y,x!=y);
    printf("--------------------------------\n");
    printf("***Note: 1 = True   0 = False") ;
    return 0;
}