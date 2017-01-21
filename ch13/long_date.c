/*
 * Program that accepts a date from the user in the form mm/dd/yyyy\
 * and then displays the date in the form month, dd, yyyy, where month
 * is the name of the month
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATE_SEG_MAX 4

void bad_input(void);
void print_longdate(char *input);

int main(int argc, char *argv[])
{
    if(argc != 2)
        bad_input();
 
    print_longdate(argv[1]);

    return 0;
}

void bad_input(void)
{
    printf("usage: ./long_dates mm/dd/yyyy\n");
    exit(0);
}

void print_longdate(char *input)
{
    if(strlen(input) != 10 && strlen(input) != 9)
        bad_input();

    char date_segs[3][DATE_SEG_MAX];

    int i, j, num_slashes;
    i = j = num_slashes = 0;

    //loop throgh date "segments and read into date_segs
    for(; i < strlen(input); i++)
    {
        char c = input[i];

        if(c == '/')
        {
            j = 0;
            num_slashes++;
            if(num_slashes < 3) 
                continue;
            else
                break;
        }
        else if (j >= DATE_SEG_MAX)
        {
            printf("bad input\n");
            bad_input();
        }
        else
        {
            date_segs[num_slashes][j]= c;
            j++;
        }
    }
    
    if(num_slashes != 2)
        bad_input();

} 
