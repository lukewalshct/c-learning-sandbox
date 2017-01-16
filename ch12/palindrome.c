/*
 * Simple program that determines whether user-inputted
 * string is a palindrome. Purpose is to get practice with
 * array pointers.
 */

#include <stdio.h>
#include <ctype.h>

/*typedefs*/
typedef int bool;

/*definitions*/
#define TRUE 1
#define FALSE 0
#define MAX_MESSAGE 200

/*function prototypes*/
void addLetter(char c, char *arr, int *i);
void printIsPalindrome(char *arr, int *i);

int main(void)
{
    char chars[MAX_MESSAGE];
    char c;
    int i = 0;

    printf("Please enter a message: ");

    while((c = getchar()) != '\n')
    {
        if (isalpha(c))
            addLetter(c, chars, &i);
    }

    i--;
    printIsPalindrome(chars, &(i));

    return 0;
}

void addLetter(char c, char *arr, int *i)
{
    if(*i >= MAX_MESSAGE)
        printf("Message too long. Program exiting...\n");
    else {}
        arr[(*i)++] = c;
}

void printIsPalindrome(char *chars, int *right)
{
    int left = 0;

    while(left <= *right)
    {
        if(chars[left++] != chars[(*right)--])
        {
            printf("NOT a palindrome\n");
            return;
        }
    }

    printf("IS a palindrome\n");
}
