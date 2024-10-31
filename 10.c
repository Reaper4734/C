#include <stdio.h>

void main() {
 int bal,dep,witd,op,pin1,pin2,pin3;;
 int a=0, b=0 ,c=0, d=0, e=0;
 
 menu:
 printf("\n=======WELCOME TO BANK OF INDIA=======");
 printf("\n PLEASE SELECT OPTION TO CHECK ACC BALANCE ");
 printf("\n PLEASE SELECT OPTION TO DEPOSITE ");
 printf("\n PLEASE SELECT OPTION TO WITHDRAW");
 printf("\n PLEASE SELECT OPTION TO  LOGIN INTO BANKING PAGE");
 printf("\n PLEASE SELECT OPTION TO EXIT");
printf("\n Please select your desired option");
    scanf("%d", &op);
    switch (op)
    {
    case 1:if(e==1){
    
 printf("\n Account Balance is %d",bal );
     
       a=1;
        }else{
                printf("\n Please login into the bank");
        }

         goto menu;
         break;

        case 2:if(e==1){
        printf("\nEnter Amount to Deposite : ");
 scanf("%d",&dep);
 
 
      bal=bal+dep;
    printf("\nAmount deposited succesfully ");
    printf("\nAvaliable balance is ==> %d",bal);}
    else{
                printf("\n Please login into the bank");
        }
    goto menu;
    b=1;
    break;
    
    case 3:if(e=1){
    printf("\nEnter amount to withdraw ==>");
    scanf("%d",&witd);
    if(bal>=witd)
    {printf("\n Amount withdrawed succesfully");
    printf("\n Your Remaining balance is ==> %d",witd-bal);
    

    
    
    
    }else{printf("\n Insufficient balance");}}
    else{
                printf("\n Please login into the bank");
        }
    goto menu;
    c=1;
    break;
    case 4:
    e=1;
     r:
     printf("\n Enter a pin==>");

        scanf("%d",&pin1);
     r2:
     printf("\n Re-Enter a pin==>");

        scanf("%d",&pin2);
if(pin1==pin2){
    if(pin1<=9999&&pin1>=999){
            


         printf("\n Pin has been verified");
     
 
         r3:
         printf("\n Please Re-enter pin to login==>");

            scanf("%d",&pin3);

 if(pin1==pin3){

         printf("\n Login has been successful");
         }
 else{

         printf("\n Login Failed");
            goto r3;
            break;
         }
         }
 else{
            printf("\n Pin Cannot more than or less than 4 digits");
            goto r;
            break;
         }

         }
else{
            printf("\n Pin does not match");
            goto r2;
            break;
            
    }goto menu;
    break;
    case 5:
    printf("\n THANK YOU FOR BANKING WITH US");
    break;
        
   
    
    
    default:
        break;

    
    
    
    
    
    
    
    
    }
}
