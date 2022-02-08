#include <stdio.h>
int main()
{
    char name[20];
    char sex;
    int age;
    int id;
    float score;
    printf("Input name=");
    scanf("%s",name);
    printf("Input Gender");
    scanf("%c",sex);
    printf("Input ID=");
    scanf("%d",id);
    printf("Input score=");
    scanf("%f",score);
    
    return 0;
}