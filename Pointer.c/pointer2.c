#include <stdio.h>
int main(){
    int x=100; //Variable Declaration 
    int *ptr; //Pointer Declaration
    ptr=&x;   //Pointer point to x
    
    printf("Address Variable of X=%p\n",&x);
    printf("Address Pointer ptr=%p\n",&ptr);

    printf("\n\nValue of x=%d\n",x);
    printf("Value of ptr from x=%d\n",*ptr);
    
}