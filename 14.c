
#include<stdio.h>
void main(){
int no[2][3],fo[2][3],sumarr[2][3],i,j,sum=0;
printf("Enter the number here==>");
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&no[i][j]);
}
}



printf("Enter the number here==>");
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&fo[i][j]);
}
}

for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            sumarr[i][j] = no[i][j] + fo[i][j]; }}


printf("\n Sum of Two 2D array is ==>");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("\t%d",sumarr[i][j]);
        }
    printf("\n");

}
}