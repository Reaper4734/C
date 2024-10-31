#include<stdio.h>
void main(){
    int i,j,k,l,no[2][3],fo[2][3],sum[2][3];
    printf("Enter the number here==>");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &no[i][j]);
        }
    }
    printf("Enter the number here==>");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &fo[i][j]);
        }
    }
    k=1;
    l=2;
    int m;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
          sum[i][j]=no[i][j]+fo[k][l];
        }
        k--;
        l = 2;
    }
    printf("\n Sum of Two 2D array is ==>");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
    }
}