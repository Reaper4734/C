#include<stdio.h>
#include<stdlib.h>
int size,*ptr,i;
void allocate()
{
    printf("\n Enter new the size of the Memory");
    scanf("%d",&size);
    ptr = (int*)realloc(ptr,size*sizeof(int));

}

void main()
{    
    printf("\n Enter Size of Memory :   ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    printf("\n The Values are");
    for(i=0;i<size;i++)
    {
    printf("\n%d",ptr[i]);
    } 
    void allocate();
    printf("\n The Values are");
    for (i = 0; i < size; i++)
    {
        printf("\n%d", ptr[i]);
    }
}












