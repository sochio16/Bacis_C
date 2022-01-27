#include<stdio.h>
int main()
{   int id;
    char name[20];
    char sex;
    float score;
    printf("==========Information students======\n");
    printf("    Input Your ID      =");scanf("%d",&id);fflush(stdin);
    printf("    Input Your name    =");gets(name);
    printf("    Input Your Gender  =");scanf("%c",&sex);
    printf("    Input Your Score        =");scanf("%f",&score);
    printf("=========Students Information=========|n");
    printf("                                                    \n");
    printf("   ID        Name       Sex       Score\n");
    printf("                                                    \n");
    printf(" %d     %s          %c        %f\n",id,name,sex,score);
    printf("                                                    \n");
    return 0;
}