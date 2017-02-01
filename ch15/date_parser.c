/* contains functions for parsing and validating dates*/

#include "common_macros.h"
#include "date_parser.h"
#include <stdio.h>

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
    }
     
    return result;
}

void validate_dates(int dates[NUM_SEGS])
{
    int m, d, y;
    int days_per_month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    m = dates[0];
    d = dates[1];
    y = dates[2];

    if(m < 1 || m > 12 ||
        d < 1 || d > 31 ||
        y < 1000 || y > 9999 ||
        (d > days_per_month[m-1])) 
        bad_input();
}
