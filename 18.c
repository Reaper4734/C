#include<stdio.h>
void input()
{
    int a, b;
    printf("\n Enter two numbers");
    scanf("%d%d", &a, &b);
}e[5];
void add()
{
    void input();
        printf("\n The Addtion of the two number is  %d",input);
}
void sub()
{
    void input();
    printf("\n Substraction of Two Numbers is %d",input);
}
void mul()
{
    void input();
    printf("\n Multiplication of Two Numbers is %d",input);
}
void div()
{
    void input();
    printf("\n  Division of Two Numbers is %d",input);

}
float dev(int a,int b)
{
    int div;
    div=a/b;
    return div;
}
void main()
{
    add();
    sub();
    mul();
    div();
    float divi;
    divi=dev(50,40);
    printf("\n The value of divi is %f",divi);

}

