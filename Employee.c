#include<stdio.h>
void advance(int i);
struct func
{
  char name[20];
  float sal;
  int id;


}e[5];
   

void IN_data()
{int i,j;
for(i=0;i<5;i++)
  {   //name
    printf("\n==========INPUT==========");
    printf("\n Enter employee name  :   ");
    scanf("%s",e[i].name);
  }  
    // id
    for (i = 0; i < 5; i++)
    {
        printf("\n Enter Employee ID    :   ");
        scanf("%d",&e[i].id);
        for (j = 0; j < i; j++)
        {
            if (e[i].id == e[j].id && i != j)
            {
                printf("\n ID NOT CREATED");
            }
        }
    }
    // salary
    for (i = 0; i < 5; i++)
    {   for(;;){
        printf("\n Enter Employee Salary :   ");
        scanf("%f",&e[i].sal);
        advance(i);
        if (e[i].sal >= 10000 && e[i].sal <= 30000)
        {
            break; 
        }
        if (e[i].sal >=30000)
        {
            printf("\n Invalid Input Salary Cannot Exceed Rs30000/-");
            
        }
        
        if(e[i].sal>10000)
        {
            printf("\n Invalid Input Salary Cannot  be less than Rs10000/-");
           
        }
    
      
    }
    }
}
void advance(int i)
{ 
    if (e[i].sal >= 10000 && e[i].sal <= 20000)
    {
        e[i].sal -= 5000;
        printf("\n Rs 5000/- has been credited to the employee's bank account as an 'Advanced Salary'. Remaining Salary: %.2f", e[i].sal);
    }
}

void OUT_data()
{
 int i;
 printf("\n==========OUTPUT==========");
 for(i=0;i<5;i++)
 {
    printf("\n Employee Name    :   %s",e[i].name);
    printf("\n");
    printf("\n Employee ID      :   %d",e[i].id);
    printf("\n");
    printf("\n  Employee Salary :  %.2f",e[i].sal);
    printf("\n");
 }
}
void main()
{
    IN_data();
   
    OUT_data();
    
}
