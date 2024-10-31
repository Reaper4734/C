#include<stdio.h>
void main()
{
int no[5],sub,sum,mul;
float div;




printf("\n Enter the number");
int i;
for( i=0;i<5;i++)
{
   
    scanf("%d",&no[i]);

}
 printf("\nEntered Numbers are: ");
 
for(int i=0;i<5;i++)
{
    printf("%d",no[i]);
}

sum=no[5];
for (int  i = 0; i < 5; i++){
sum=sum+no[i];}

printf("\n Addition of all the number is %d",sum);


sub=no[4];
for(int i=3;i>=0;i--){
sub=sub-no[i];}


printf("\n Substraction of the number is = %d",sub);

mul=no[0];
for(int i = 0; i < 5; i++){
mul=mul*no[i];}


printf("\n Multiplication of all number is = %d",mul);


 int max = no[0];
    for( i = 0; i < 5; i++) {
        if(max < no[i]) {
            max = no[i];


        }
    } 


      for( i = 0; i < 5; i++) {
        if(max==no[i]){

            break;}

      }
      int a,status=1;

      
      printf("\n Index number of highest number entered is %d",i);
      printf("\n Enter the Number Here==>");
      scanf("%d",&a);
      for( i=0; i < 5; i++){  if(a==no[i]){
           
            
             status=2;
             break;}}

        if(a==no[i]){
           
            
        }if(status==1){
            printf("\n  Number is not in the index");

        }if(status==2){
            printf("\n  Number is in the  index");

        }
        int num = 0;
        for( i=0; i < 5; i++){  if(a==no[i]){
            num++;

        }}
        printf("\n The number is  repeated %d times",num);

         int arr ;
        for(int i = 0; i < 5; i++) {
        for(int  j = i+1; j < 5; j++) {
            if(no[i] > no[j]) {
              arr=no[i];
              no[i]=no[j];
             no[j]=arr;




        }}}
        printf("\n The Ascending Order of the array is ");
        for(int i=0;i<5;i++)
{
    printf(" %d",no[i]); 
}}
      
        



      
   
     





