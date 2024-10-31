#include<stdio.h>
struct emp
{
    char name [20];
    int ID;
    float sal;

}e[3];

void main()
{
    FILE *ptr;
    int i,j;
    ptr=fopen("emp.txt","a");
        for(i=0;i<3;i++)
        {
            printf("\n Enter name   :   ");
            scanf("%s",&e[i].name);
            printf("\nEnter Id  :   ");
            scanf("%d",&e[i].ID);
            printf("\nEnter salary  :   ");
            scanf("%f",&e[i].sal);
            fwrite(&e[i],sizeof(struct emp),3,ptr);

        }
        printf("\n Data saved");
        fclose(ptr);
    
        
   
    
}
