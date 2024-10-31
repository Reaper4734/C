#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("\n Enter two numbers     :       ");
    scanf("%d%d",&a,&b);
    printf("You have  entered %d and %d\n",a,b);

    printf("\n Value of a = %d and b = %d");
    //Adding extra variable for storage
         sum=a+b;
    int  sub=a-b;
    int multi=a*b;
    int  divide=a/b;
    int  remain=a%b;
    printf("\n Addition = %d",sum);
    printf("\n Substraction = %d",sub);
    printf("\n Multiplication = %d",multi);
    printf("\n Division = %d",divide);
    printf("\n Remainder = %d",remain);
    return 0; }