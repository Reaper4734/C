#include<stdio.h>
void main(){
int no[2][3],i,j,sum=0;
printf("Enter the number here==>");
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&no[i][j]);
 }
}


printf("\n the numbers in array are==>");
    
  for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",no[i][j]);
            }
            printf("\n");
            }
            for(i=0;i<2;i++){
for(j=0;j<3;j++){

sum=sum+no[i][j];


}}
printf("\n sum of all numbers in array is ==> %d",sum);
}