/*
 * Repeat of smallest_bills.c, except this time uses function with pointers
 * to demonstrate how pointers work.
 *
 * Program that aks user to enter a U.S. dollar amount and
 * then shows how to pay that mount using the smallest # of
 * 20, 10, 5, and 1 dollar bils
 */

#include <stdio.h>

/*function prototypes*/
void pay_amount(int dollars, int *twenties, int *tens,
    int *fives, int *ones);

void print_amounts(int twenties, int tens, int fives, int ones);

int main(void)
{
    int dollars, twenties, tens, fives, ones;

    printf("Enter a dollar amount:");

    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    print_amounts(twenties, tens, fives, ones);

    return(0);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{

    *twenties = dollars/20;

    dollars = dollars%20;     

    *tens = dollars/10;

    dollars = dollars%10;
    
    *fives = dollars/5;
    
    dollars = dollars % 5;

    *ones = dollars;

}

void print_amounts(int twenties, int tens, int fives, int ones)
{
    printf("$20 bills: %d\n", twenties);

    printf("$10 bills: %d\n", tens);

    printf("$5 bills: %d\n", fives);
    
    printf("$1 bills: %d\n", ones);
}
