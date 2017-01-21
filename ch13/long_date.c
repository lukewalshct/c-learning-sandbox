/*
 * Program that accepts a date from the user in the form mm/dd/yyyy\
 * and then displays the date in the form month, dd, yyyy, where month
 * is the name of the month
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_SEGS 3
#define DATE_SEG_MAX 4

void bad_input(void);
void print_longdate(const char *input);
void get_date_segs(const char *input, char date_segs[NUM_SEGS][DATE_SEG_MAX+1]);
int * parse_dates(char date_segs[NUM_SEGS][DATE_SEG_MAX+1]);

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

void print_longdate(const char *input)
{
    if(strlen(input) != 10 && strlen(input) != 9)
        bad_input();

    char date_segs[NUM_SEGS][DATE_SEG_MAX+1];

    get_date_segs(input, date_segs);

    int *dates = parse_dates(date_segs);   
}

void get_date_segs(const char *input, char date_segs[NUM_SEGS][DATE_SEG_MAX+1])
{
    int i, j, num_slashes;
    i = j = num_slashes = 0;

    //loop throgh date "segments and read into date_segs
    for(; i < strlen(input); i++)
    {
        char c = input[i];

        if(c == '/')
        {
            date_segs[num_slashes][j] = '\0';        
            j = 0;            
            num_slashes++;
            if(num_slashes < NUM_SEGS) 
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

    date_segs[NUM_SEGS-1][DATE_SEG_MAX] = '\0';
    
    if(num_slashes != NUM_SEGS-1)
        bad_input();
}

//parses 2-d array of chars into 1-d array of ints
int * parse_dates(char seg_dates[NUM_SEGS][DATE_SEG_MAX+1])
{
    static int result[NUM_SEGS];
    int i;

    for(i = 0; i < NUM_SEGS; i++)
    {
        int seg_val;
        
        if(sscanf(seg_dates[i], "%d", &seg_val) != 1)
            bad_input();
        
        result[i] = seg_val;
        printf("%d\n", result[i]);
    }
     
    return result;
}
