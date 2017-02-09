/* 
 * A program that sorts a series of words entered by the user,
 * following these requirements:
 *
 *-Assume each word is <= 20 chars
 *-Stop reading when user enters an empty word (i.e. just Enter)
 *-Store each word in dynamically allocated string, using array of pointers
 *-Sort the array and print sorted array
 */

#include <stdio.h>
#include "read_line.h"

#define MAX_LEN 20

int main(void)
{
    char str[MAX_LEN];

    do
    {
        printf("Enter word: ");

        read_line(str, MAX_LEN);

        printf("%s\n", str);

    } while(str[0] != '\0');

    return 0;
}
