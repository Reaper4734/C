#include <stdio.h>

void main() {
    int a,b,c;
    printf("\n Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("\n is the largest number is %d" ,a);
        
        }
        else{
            printf("\n the largest number is %d ",c );

            
        }
    }
    else{
        if(b>c){
            if(b>a){
           printf("\n the largest number is %d" ,b );
            }

    }else{
        printf("\n the largest number is %d" ,c );
        }

    
    }
    }