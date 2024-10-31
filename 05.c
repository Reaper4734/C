#include <stdio.h>

void main() {
 int bal,dep,witd;
 bal=5000;
 printf("\n Account Balance is %d",bal );
 printf("\nEnter Amount to Deposite : ");
 scanf("%d",&dep);
 
 if(dep<10000){
      bal=bal+dep;
    printf("\nAmount deposited succesfully ");
    printf("\nAvaliable balance is ==> %d",bal);
    printf("\nEnter amount to withdraw ==>");
    scanf("%d",&witd);
    if(bal>=witd)
    {printf("\n Amount withdrawed succesfully");
    printf("\n Your Remaining balance is ==> %d",bal-witd);

    
    
    
    }else{printf("\n Insufficient balance");}
   


 }else{
 
    printf("\n Your deposite limit has been exceeded");
    

 }
 


}
 

 







