/*
 * Program that accepts a date from the user in the form mm/dd/yyyy\
 * and then displays the date in the form month, dd, yyyy, where month
 * is the name of the month
 * */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for(i = 0; i < argc; i++)
    {

        printf("%s\n", argv[i]);

    } 

    return 0;
}

