#include<stdio.h>
struct employ{
    int id;
    float sal;
    char name[20];

}e[3];
void main(){
    int i,j;
    printf("\n******fill the info*******");
    for(i=0;i<3;i++){
        printf("\n\n\n------employ %d -------",i+1);
        printf("\n\n enter the name==>");
        scanf("%s",&e[i].name);
        retry:
        printf("\n enter the id==>");
        scanf("%d",&e[i].id);
        for(j=0;j<i;j++){
            if(e[i].id==e[j].id && i!=j){
                printf("\n id not avaliable");
                goto retry;
            };
        }
        printf("\n enter salary==>");
        scanf("%f",&e[i].sal);

    }

    printf("\n\n**** the data of employ ****");
    for(i=0;i<3;i++){
        printf("\n\n\n------employ %d -------",i+1);
        printf("\n\nthe name==>%s",e[i].name);
       
        printf("\nthe id==>%d",e[i].id);
       
        printf("\n enter salary==>%f",e[i].sal);
        
    }
}