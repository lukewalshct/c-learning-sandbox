/*
 * A program that accepts a user-inputted country code and
 * outputs the corresonding country. Outputs error message 
 * if the country code doesn't exist.
 *
 * Meant to demonstrate use of structs. Assumes valid user input.
 */

#include "read_int.h" 
#include <stdio.h>

struct dialing_code{
    char *country;
    int code;
};

const struct dialing_code country_codes[] =
{{"Argentina", 54}, {"Bangladesh", 880}, {"Brazil", 55},
 {"Burma", 95}, {"China", 86}, {"Columbia", 57},
 {"Egypt", 20}, {"France", 33}, {"Germany", 49},
 {"India", 91}, {"Italy", 39}, {"Japan", 81},
 {"Mexico", 52}, {"Russia", 7}, {"United Kingdom", 44},
 {"United States", 1}};

void print_country(int code);

int main(void)
{
    printf("Please enter a country code: ");

    int i = read_int();

    print_country(i);

    return(0);
}

void print_country(int code)
{
    int i;

    for(i = 0; i < sizeof(country_codes)/sizeof(country_codes[0]); i++)
    {
        if(country_codes[i].code == code)
        {
            printf("%s\n", country_codes[i].country);
            return;
        }
    }

    printf("Country does not exist.\n");

}
