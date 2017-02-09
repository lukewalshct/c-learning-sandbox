/*
 * Contains a function that reads a line from the command prompt
 */

#include <stdio.h>
#include "read_line.h"

int read_line(char str[], int max_len)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < max_len)
            str[i++] = ch;
    }   
    
    str[i] = '\0';
    return i;
}
