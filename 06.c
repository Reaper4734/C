#include <stdio.h>

void main() {
     int pin1,pin2,pin3;
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
         }
         }
 else{
            printf("\n Pin Cannot more than or less than 4 digits");
            goto r;
         }

         }
else{
            printf("\n Pin does not match");
            goto r2;
    }







}