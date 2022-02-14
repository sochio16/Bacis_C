#include <stdio.h>
int main() {
int id;
char name[20];
char gender[10];
float salary,bonus;
double income;
printf("Input ID=");
scanf("%d",&id);
printf("Input name=");
scanf("%s",&name);
printf("Input gender=");
scanf("%s",&gender);
printf("Input salary=");
scanf("%f",&salary);
    if(salary<150){
        bonus=0.15*salary;
    }else if(salary>=150 && salary<300){
        bonus=0.10*salary;
    }else if(salary>=300 &&salary<500){
        bonus=0.05*salary;
    }else{
        bonus=0.03*salary;
    }
    income=salary+bonus;
        printf("ID=%d\n",id);
        printf("name=%s\n",name);
        printf("gender=%s\n",gender);
        printf("salary=%.0f$\n",salary);
        printf("bonus=%.0f$\n",bonus);
        printf("income=%.0lf$\n",income);
        
        
    
    
    
    return 0;
}