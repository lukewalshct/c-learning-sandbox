/*
 * Program that akss user to enter a U.S. dollar amount and
 * then shows how to pay that mount using the smallest # of
 * 20, 10, 5, and 1 dollar bils
 */

#include <stdio.h>

int main(void)
{
    int amount;
    int num_bills;

    printf("Enter a dollar amount:");

    scanf("%d", &amount);
    num_bills = amount/20;
    printf("$20 bills: %d\n", num_bills);

    amount = amount%20;     
    num_bills=amount/10;
    printf("$10 bills: %d\n", num_bills);

    amount = amount%10;
    num_bills=amount/5;
    printf("$5 bills: %d\n", num_bills);
    
    amount=amount%5;
    printf("$1 bills: %d\n", amount);

    return(0);
}
