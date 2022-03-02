#include<stdio.h>
int main(){
    char stu[50];
    int l=0;
    printf(" Input String =");      // E T E C \0
    fgets(stu,sizeof stu,stdin);    // 0 1 2 3 4 
    while(stu[l]!='\0'){
            /*
                'E'!='\0' true
                'T'!='\0' true 
                'E'!='\0' true 
                'C'!='\0' true 
                '\0'!='\0' false
            */
           l++; //4
    }
    printf("\n Lenght Of The String is: %d\n",l-1);
    return 0;
}