/*
 * A program that accepts a user-inputted country code and
 * outputs the corresonding country. Outputs error message 
 * if the country code doesn't exist.
 *
 * Meant to demonstrate use of structs.
 */

#include "read_int.h" 

int main(void)
{
    printf("Please enter a country code: ");

    int i = read_int();

    printf("%d\n", i);

    return(0);
}
