/*
 * Contains a function that reads an int from the command line
 */

#include <stdio.h>
#include "read_int.h"

int read_int(void)
{
    int i;
  
    scanf(" %d",&i);

    return i;
}
