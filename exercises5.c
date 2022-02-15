
#include <stdio.h>

int main(){
int code;
//string name[20];
int qty;
double price;
int discount;
float total;
float payment;
printf("Input code=");
scanf("%d",&code);
printf("Input qty=");
scanf("%d",&qty);
printf("Input price=");
scanf("%lf",&price);
printf("Input discount=");
scanf("%d",&discount);
total=qty*price;
payment=total-(total*discount/100);
    if(total>=1 && total<=10){
        payment=total-total*0.1;
}   
else if(total>=10 && total<=20){
        payment=total-total*0.2;
}   
else if(total>=20 && total<=30){
        payment=total-total*0.3;
}   
else if(total>=30 && total<=40){
        payment=total-total*0.4;
}   
else if(total>=40 && total<=50){
        payment=total-total*0.5;
}   
else if(total>=50 && total<=60){
        payment=total-total*0.6;
}  
else{
        payment=total-total*0.7;
} 
printf("code:%d\n",code);
printf("qty:%d\n",qty);
printf("price:%2.lf$\n",price);
printf("total:%2.f$\n",total);
printf("payment:%2.f$\n",payment);
        



       
return 0;
}