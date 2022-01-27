#include<stdio.h>
int main()
{   float x, y, z;
     printf("Input X=");scanf("%f",&x);
     printf("Input Y=");scanf("%f",&y);
     printf("Input z=");scanf("%f",&z);
     printf("=========operator==========\n");
     printf("X+Y*Z=%.2f\n",x+y-z);
     printf("X-Y*Y=%.2f\n",x-y*z);
     printf("X*Y+Z=%.2f\n",x*y+z);
     printf("X/Y=%.2f\n",x/y);

     printf("        Good Bye....\n");

    return 0;
}
