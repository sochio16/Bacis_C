#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 //Declare the maximum size of the string 
int main(){
    char str[str_size];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;
        printf("\n\nCount total number of alphabets, digit and special characters :\n");
        printf("-------------------------------------------------------------------\n");
        printf("Input the string : ");
        fgets(str, sizeof str,stdin);
        /* Checks each characters of string*/
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='o' && str[i]<='9')
        {
        digit++;
        }
        else 
        {
            splch++;
        }
        i++;
    }
    printf("Number of Alphabets in(A-Z,a-z) the string is : %d\n", alp);
    printf("Number of Digits(0-9) in the string is : %d\n", digit);
    printf("Number of special characters in the string is : %d\n\n", splch);    
}