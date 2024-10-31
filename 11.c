#include <stdio.h>

void main() {
    int bal_saving = 0, bal_current = 0, dep, witd;
    int pin_saving, pin_current, pin1, pin2, pin3;
    int opmain, op1;
    int is_logged_in_saving = 0, is_logged_in_current = 0;

    menu:
    printf("\n=======WELCOME TO BANK OF INDIA=======");
    printf("\n1. CHECK ACCOUNT BALANCE");
    printf("\n2. DEPOSIT");
    printf("\n3. WITHDRAW");
    printf("\n4. LOGIN");
    printf("\n5. EXIT");
    printf("\nPlease select your desired option: ");
    scanf("%d", &opmain);

    switch(opmain) {
        case 1:  // Check Balance
            printf("\nPlease select the type of account:");
            printf("\n1. SAVING ACCOUNT");
            printf("\n2. CURRENT ACCOUNT");
            printf("\nSelect your account type: ");
            scanf("%d", &op1);

            if (op1 == 1) {
                if (is_logged_in_saving) {
                    printf("\nSaving Account Balance is: %d", bal_saving);
                } else {
                    printf("\nPlease login into the saving account.");
                }
            } else if (op1 == 2) {
                if (is_logged_in_current) {
                    printf("\nCurrent Account Balance is: %d", bal_current);
                } else {
                    printf("\nPlease login into the current account.");
                }
            } else {
                printf("\nInvalid account type.");
            }
            break;

        case 2:  // Deposit
            printf("\nPlease select the type of account:");
            printf("\n1. SAVING ACCOUNT");
            printf("\n2. CURRENT ACCOUNT");
            printf("\nSelect your account type: ");
            scanf("%d", &op1);

            if (op1 == 1) {
                if (is_logged_in_saving) {
                    printf("\nEnter Amount to Deposit in Saving Account: ");
                    scanf("%d", &dep);
                    bal_saving += dep;
                    printf("\nAmount deposited successfully.");
                    printf("\nSaving Account Balance is: %d", bal_saving);
                } else {
                    printf("\nPlease login into the saving account.");
                }
            } else if (op1 == 2) {
                if (is_logged_in_current) {
                    printf("\nEnter Amount to Deposit in Current Account: ");
                    scanf("%d", &dep);
                    bal_current += dep;
                    printf("\nAmount deposited successfully.");
                    printf("\nCurrent Account Balance is: %d", bal_current);
                } else {
                    printf("\nPlease login into the current account.");
                }
            } else {
                printf("\nInvalid account type.");
            }
            break;

        case 3:  // Withdraw
            printf("\nPlease select the type of account:");
            printf("\n1. SAVING ACCOUNT");
            printf("\n2. CURRENT ACCOUNT");
            printf("\nSelect your account type: ");
            scanf("%d", &op1);

            if (op1 == 1) {
                if (is_logged_in_saving) {
                    printf("\nEnter amount to withdraw from Saving Account: ");
                    scanf("%d", &witd);
                    if (bal_saving >= witd) {
                        bal_saving -= witd;
                        printf("\nAmount withdrawn successfully.");
                        printf("\nRemaining Saving Account Balance is: %d", bal_saving);
                    } else {
                        printf("\nInsufficient balance in Saving Account.");
                    }
                } else {
                    printf("\nPlease login into the saving account.");
                }
            } else if (op1 == 2) {
                if (is_logged_in_current) {
                    printf("\nEnter amount to withdraw from Current Account: ");
                    scanf("%d", &witd);
                    if (bal_current >= witd) {
                        bal_current -= witd;
                        printf("\nAmount withdrawn successfully.");
                        printf("\nRemaining Current Account Balance is: %d", bal_current);
                    } else {
                        printf("\nInsufficient balance in Current Account.");
                    }
                } else {
                    printf("\nPlease login into the current account.");
                }
            } else {
                printf("\nInvalid account type.");
            }
            break;

        case 4:  // Login
            printf("\nPlease select the type of account:");
            printf("\n1. SAVING ACCOUNT");
            printf("\n2. CURRENT ACCOUNT");
            printf("\nSelect your account type: ");
            scanf("%d", &op1);

            if (op1 == 1) {
                printf("\nEnter a 4-digit PIN for Saving Account: ");
                scanf("%d", &pin1);

                if (pin1 < 1000 || pin1 > 9999) {
                    printf("\nInvalid PIN. Must be 4 digits.");
                    break;
                }

                printf("\nRe-enter your PIN for Saving Account: ");
                scanf("%d", &pin2);

                if (pin1 != pin2) {
                    printf("\nPINs do not match.");
                    break;
                }

                printf("\nPlease re-enter your PIN to login into Saving Account: ");
                scanf("%d", &pin3);

                if (pin1 == pin3) {
                    printf("\nLogin successful into Saving Account.");
                    pin_saving = pin1;
                    is_logged_in_saving = 1;
                } else {
                    printf("\nLogin failed.");
                }
            } else if (op1 == 2) {
                printf("\nEnter a 4-digit PIN for Current Account: ");
                scanf("%d", &pin1);

                if (pin1 < 1000 || pin1 > 9999) {
                    printf("\nInvalid PIN. Must be 4 digits.");
                    break;
                }

                printf("\nRe-enter your PIN for Current Account: ");
                scanf("%d", &pin2);

                if (pin1 != pin2) {
                    printf("\nPINs do not match.");
                    break;
                }

                printf("\nPlease re-enter your PIN to login into Current Account: ");
                scanf("%d", &pin3);

                if (pin1 == pin3) {
                    printf("\nLogin successful into Current Account.");
                    pin_current = pin1;
                    is_logged_in_current = 1;
                } else {
                    printf("\nLogin failed.");
                }
            } else {
                printf("\nInvalid account type.");
            }
            break;

        case 5:  // Exit
            printf("\nThank you for banking with us!");
            return;

        default:
            printf("\nInvalid option.");
    }

    goto menu;
}

