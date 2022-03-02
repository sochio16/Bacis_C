#include<stdio.h>
int main(){
    char text[50];
    printf(" Input text=");
    //fgets(variable,sizeof variable,stdin);
    fgets(text,sizeof text,stdin);
    printf("======================================\n\t%s",text);
    return 0;
}