#include<stdio.h>
void main(){        
    int a,b,op;
    re:
    printf("\n ----------MENU----------");
    printf("\n SELECT OPTION 1 TO ADD");
    printf("\n SELECT OPTION 2 TO SUBSTRACT");
    printf("\n SELECT OPTION 3 TO  MULTIPLY");
    printf("\n SELECT OPTION 4 TO EXIT");
    printf("\n Please select your desired option");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
       printf("\n Enter two numbers     :       ");
       scanf("%d%d",&a, &b);
       printf("\n Addition = %d",a+b);
       goto re;

    case 2:
         printf("\n Enter two numbers     :       ");
       scanf("%d%d",&a, &b);
       printf("\n Substract = %d",a-b);
       goto re;




    case 3:
         printf("\n Enter two numbers     :       ");
       scanf("%d%d",&a, &b);
       printf("\n Mulitiply = %d",a*b);
       goto re;




    case 4:    break;
        
        
    
    default:
    break;
        
    }
   

    




}