#include<stdio.h>
int main(){
    char stu[50];
    int l=0;
    printf(" Input String =");
    fgets(stu,sizeof stu,stdin);
    while(stu[1]!='\0'){
        printf(" %c",stu[1]);
        l++;    //4
    }
    return 0;
}