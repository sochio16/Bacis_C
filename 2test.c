#include <stdio.h>
#include<math.h>
int main()
{
    char name[20];
    int a, b, c;
    printf("Name: ");
    //scanf("%c",name);
    fgets(name, 20, stdin);
    printf("Enter Math:");
    scanf("%d", &a);
    printf("Enter Khmer:");
    scanf("%d", &b);
    c = a + b;
    printf("%s",name);
    printf(" %d + %d = %d\n", a, b, c);
    return 0;
}
