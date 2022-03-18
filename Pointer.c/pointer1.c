#include<stdio.h>
int main()
{
    int x=100; //variable Declaration
    int *ptr; //Pointer Declaration
    ptr=&x;  //pointer point to x

    printf("Address Varible X=%p\n",&x);
    printf("Address Pointer ptr=%p\n",ptr);
}