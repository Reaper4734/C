#include<stdio.h>
struct emp{
    int id;
    float sal;
    char name[20];

}e[3];


void main(){

    int i,j;
    for(i=0;i<3;i++){
    printf("\n ======INPUT======");
    printf("\n Enter Employee Name  :   ");
    scanf("%s",&e[i].name); 
    retry:
    printf("\n Enter Employee ID    :   ");
    scanf("%d",&e[i].id);
    for(j=0;j<i;j++){
        if(e[i].id==e[j].id && i!=j);
        printf("\n ID NOT CREATED");
        goto retry;
        
    }
    printf("\n Enter Emplyoee Salary    :   ");
    scanf("%f",e[i].sal);}


    printf("\n Data sheet of Employees");


    for(i=0;i<3;i++)
    {   printf("\n Employee NO:  %d",i+1);
        printf("\n\n Employee Name  : %s",e[i].name);
        printf("\n Employee Id  :   %d",e[i].id);
        printf("\n Employee salary   :   %f",e[i].sal);
    }

  

}
