#include <stdio.h>

int main()
{
    char uname[20],pass[20],cpass[20];
    printf("Input user Name=");scanf("%s",&uname);
    printf("Input Password=");scanf("%s",&pass);
    printf("Input confirm password=");scanf("%s",&cpass);
    if(strcmp(uname,"sa")==0)
        if(strcmp(pass,"123")==0)
           if(strcmp(cpass,"123")==0)
            printf("welcome to Login....!"); 
            else
            printf("Invalid Confirm Password!...");
            else
            printf("invalid Password....");
            else 
            printf("Invalid User Name...");
            
            return 0;
            
}
