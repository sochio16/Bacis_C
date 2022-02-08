#include <stdio.h>
#include<string.h>
int main(){
    char name[20];
    char sex[7];
    int id;
    int age;
    float score;
    printf("Input name= ");
    gets(name);
    printf("Input your gender= ");
    fflush(stdin);
    gets(sex);
    printf("Input your ID= ");
    scanf("%d",&id);
    printf("Input your age= ");
    scanf("%d",&age);
    printf("Input your score= ");
    scanf("%f",&score);
    printf("Your informatino:\n Sex: %s\n ID: %s\n Age: %d\n Score: %.2f\n",name,sex,id,age,score);
    

    return 0;
}
