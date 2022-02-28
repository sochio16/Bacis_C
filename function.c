#include<stdio.h>

int Discount(double total){
    int dis;
    if(total>=1 && total<=10){
        dis=10;
    }else if(total<=10 && total<=20){
        dis=20;
    }else if(total<=20 && total<=30){
        dis=30;
    }else if(total<=30 && total<=40){
        dis=40;
    }else if(total<=40 && total<=50){
        dis=50;
    }else if(total<=50 && total<=60){
        dis=60;
    }else{
        dis=70;
    }
}
    int main(){

    char name1[20]="coca",name2[20]="sting",name3[20]="Viger",name4[20]="caraboa";
    float price1,price2,price3,price4;
    int qty1,qty2,qty3,qty4,dis1,dis2,dis3,dis4;
    double total1,total2,total3,total4,pay1,pay2,pay3,pay4,amount;
   ////
    printf(">>Product %s\n",name1);
    printf(">>Product %s\n",name2);
    printf(">>Product %s\n",name3);
    printf(">>Product %s\n",name4);
///             
    printf("Input price=");
    scanf("%f",&price1);
    printf("Input qty=");
    scanf("%d",&qty1);
    total1=price1*qty1;
    dis1=Discount(total1);
    pay1=total1-(total1*dis1)/100;
    
    printf("Input price=");
    scanf("%f",&price2);
    printf("Input qty=");
    scanf("%d",&qty2);
     total2=price2*qty2;
    dis2=Discount(total2);
    pay2=total2-(total2*dis2)/100;
    
    printf("Input price=");
    scanf("%f",&price3);
    printf("Input qty=");
    scanf("%d",&qty3);
    total3=price3*qty3;
    dis3=Discount(total3);
    pay3=total3-(total3*dis3)/100;
    
    printf("Input price=");
    scanf("%f",&price4);
    printf("Input qty=");
    scanf("%d",&qty4);
       total4=price4*qty4;
       dis4=Discount(total4);
       pay4=total4-(total4*dis4)/100;
    
    amount=pay1+pay2+pay3+pay4;
    printf("\n%14s%15s%13s%15s%18s%17s","Name","price","qty","total","discount","payment");
    printf("%14s%14.2f$%13d%14.2lf$%17d%%%16.2lf$\n",name1,price1,qty1,total1,dis1,pay1);
    printf("%14s%14.2f$%13d%14.2lf$%17d%%%16.2lf$\n",name2,price2,qty2,total2,dis2,pay2);
    printf("%14s%14.2f$%13d%14.2lf$%17d%%%16.2lf$\n",name3,price3,qty3,total3,dis3,pay3);
    printf("%14s%14.2f$%13d%14.2lf$%17d%%%16.2lf$\n",name4,price4,qty4,total4,dis4,pay4);
    printf("%.2lf$",amount); 
    
    return 0;

}