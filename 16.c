#include <stdio.h>
struct emp
{
    int id;
    float sal;
    char name[20];

} e1[3];
union emp2
{
    int id;
    float sal; 
    char name[20];
} e2[3];
void main(){
printf("\n Size of int  :   %d bytes",sizeof(int));

printf("\n Size of float  :   %d bytes",sizeof(float));

printf("\n Size of char   :   %d bytes",sizeof(char));

printf("\n Size of struct  emp  :   %d bytes",sizeof(e1[0]));

printf("\n Size of union  emp  :   %d bytes",sizeof(e2[0]));

}


