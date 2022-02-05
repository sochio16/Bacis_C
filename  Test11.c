#include<stdio.h>
int main()
{
    char status[20];
    printf("Input Your Crush word[Yes/No]=");
    scanf("%s",&status);
     if(strcmp(status,"Yes")==0)
     {
        printf("Your Crush \3 you..!n");
        printf("I Love you too, crush...!\n");
        printf("I will promised you,\n");
     }
     else
     {
        printf("Sad, you don't Love me, crush....\n");
        printf("I will hack your heart....!\n");
     }
     
     return 0;
}