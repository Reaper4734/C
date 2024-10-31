#include <stdio.h>

void main() {
    int op, quantity;
    float t = 0, tc = 0, tf = 0;
    float tt = 10, c = 20, cc = 50;
    float gst = 0.18;
    float total = 0;

r1:
    printf("\n ==========CAFE MENU==========");
    printf("\n SELECT OPTION 1 FOR TEA.....Rs%.0f/-", tt);
    printf("\n SELECT OPTION 2 FOR COFFEE.....Rs%.0f/-", c);
    printf("\n SELECT OPTION 3 FOR COLD COFFEE.....Rs%.0f/-", cc);
    printf("\n SELECT OPTION 4 TO EXIT");
    printf("\n Please select your desired option");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("\n Please enter quantity    :   ");
            scanf("%d", &quantity);
            tt = tt * quantity;
            t = 1;
            total += tt;
            goto r1;
            break;

        case 2:
            printf("\n Please enter quantity    :   ");
            scanf("%d", &quantity);
            c = c * quantity;
            tc = 1;
            total += c;
            goto r1;
            break;

        case 3:
            printf("\n Please enter quantity    :   ");
            scanf("%d", &quantity);
            cc = cc * quantity;
            tf = 1;
            total += cc;
            goto r1;
            break;

        case 4:
            printf("\n Generating your bill.......");
            printf("\n Exiting.....................");
            printf("\n Thank you for your patronage");
    
            break;

        default:
            printf("\n Enter choice between 1 to 4 only");}


            printf("\n ==========BILL==========");
            if (t == 1) {
                printf("\n TEA.....Rs%.2f/-", tt);
                total = tt;
               
    printf("\n GST (%.2f%%): Rs%.2f/-", gst * 100, total * gst);
    printf("\n Grand Total: Rs%.2f/-", total + (total * gst));
            }
            if (tc == 1) {
                printf("\n COFFEE.....Rs%.2f/-", c);
                total = c;
           
    printf("\n GST (%.2f%%): Rs%.2f/-", gst * 100, total * gst);
    printf("\n Grand Total: Rs%.2f/-", total + (total * gst));
            }
            if (tf == 1) {
                printf("\n COLD COFFEE.....Rs%.2f/-", cc);
                total = cc;
                
    printf("\n GST (%.2f%%): Rs%.2f/-", gst * 100, total * gst);
    printf("\n Grand Total: Rs%.2f/-", total + (total * gst));
            }
            printf("\n Thank you for your patronage");
}
