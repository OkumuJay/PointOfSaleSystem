#include <stdio.h>
#include <stdlib.h>

main(){

int qnty, code;
float price,amount,totalAmount,cash,change, VAT;
char addAnother;

do
{
    system ("cls");
    printf("====JAY GROCERY WALMART====\n");
    printf("[1]One kg of SUGAR\t\t Ksh 175.00\n");
    printf("[2]A packet of TEALEAVES\t\t Ksh 80.00\n");
    printf("[3]Five-pack INDOMIE\t\t Ksh 135.00\n");
    printf("[4]A packet of WEETABIX\t\t Ksh 150\n");

    printf("\nENTER CODE\t: ");
    scanf("%d",&code);
    printf("nENTER QUANTITY\t:");
    scanf("%d",&qnty);

    switch(code)
    {
        case 1: price = 175.00;
        break;
        case 2: price = 80.00;
        break;
        case 3: price = 135.00;
        break;
        case 4: price = 150.00;
        break;
    }
    amount = price*qnty;
    printf("\nAmount\t: %.2f", amount);

    totalAmount = totalAmount + amount;
    printf("\nTotal Amount\t: %.2f", totalAmount);

    VAT = totalAmount * 0.16;
    printf("\nVAT\t: %.2f", VAT);

    printf("\nAdd another order (y/n)?");
    addAnother = getche();

    }while (addAnother == 'y' || addAnother == 'y');

    do
    {
        printf("\nCash Tendered\t");
        scanf("%f", &cash);
    }while (cash-totalAmount);

    change = cash-totalAmount;
    printf("\nChange\t\t: %.2f", change);
    printf("\nWELCOME AGAIN");

    return 0;
}
