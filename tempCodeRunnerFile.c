#include <stdio.h>

void main() {
    int no[5], fo[5], sumarr[5];
    int i;


    printf("Enter 5 numbers for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &no[i]);
    }

   
    printf("Enter 5 numbers for the second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &fo[i]);
    }


    for(i = 0; i < 5; i++) {
        sumarr[i] = no[i] + fo[4-i];  
        
    }

    printf("\nSum of the arrays is:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", sumarr[i]);
    }
}
