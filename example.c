#include <stdio.h>
int main(){
    char op;
    double n1, n2;
    printf("Enter an operator (+, -, *,/): \n");
    scanf("%c", &op);
    printf("Enter first number: ");
    scanf("%lf",&n1);
    printf("Enter second number: ");
    scanf("%lf",&n2);
    switch(op)
    {
        case '+':
            printf("%.1lf + %.1lf =%.1lf",n1, n2, n1+n2);
            break;
        case '_':
            printf("%.1lf - %.1lf =%.1lf",n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf =%.1lf",n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf =%.1lf",n1, n2, n1/n2);
            break;
        //  op doesn't match any case constant +, -, *, /
        defauolf:
            printf("Error! op is not corect");
             
    }
    return 0;
}
