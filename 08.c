#include<stdio.h>

 void main() {
    int op;
    int tea1 = 20;
    int cofe1 = 30;
    int coldcofe1 = 80;
    float t, c, cc;
    float gst = 18.0; 
    
    
    printf("\n ==========CAFE MENU==========");
    printf("\n SELECT OPTION 1 FOR TEA.....Rs%d/-", tea1);
    printf("\n SELECT OPTION 2 FOR COFFEE.....Rs%d/-", cofe1);
    printf("\n SELECT OPTION 3 FOR COLD COFFEE.....Rs%d/-",  coldcofe1);

    printf("\n SELECT OPTION 4 TO EXIT");
    printf("\n Please select your desired option");
    scanf("%d", &op);

    switch(op) {
        case 1:
            t = tea1 + (tea1 * gst) / 100.0; 
            printf("\n===========BILL=========");
            printf("\n TEA.....Rs%d/-", tea1);
            printf("\n GST.....Rs%.2f/-", (tea1 * gst) / 100.0);
            printf("\n Your total is Rs%.2f", t);
            printf("\n Thank you for your patronage");
            break;    
           
            
        case 2:
            c = cofe1 + (cofe1 * gst) / 100.0; 
            printf("\n===========BILL=========");
            printf("\n COFFEE.....Rs%d/-", cofe1);
            printf("\n GST.....Rs%.2f/-", (cofe1 * gst) / 100.0);
            printf("\n Your total is Rs%.2f", c);
              printf("\n Thank you for your patronage");
              break;
            
        case 3:
            cc = coldcofe1 + (coldcofe1 * gst) / 100.0; 
            printf("\n===========BILL=========");
            printf("\n COLD COFFEE.....Rs%d/-", coldcofe1);
            printf("\n GST.....Rs%.2f/-", (coldcofe1 * gst) / 100.0);
            printf("\n Your total is Rs%.2f", cc);
              printf("\n Thank you for your patronage");
           break;
        case 4:
            printf("\nExiting...");
              printf("\n Thank you for your visiting");
            break;
        default:
            printf("\nInvalid option. Please try again.");
            break;
    }

    
}