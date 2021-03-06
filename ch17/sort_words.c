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
#include <stdlib.h>
#include <string.h>
#include "read_line.h"

#define MAX_STR_LEN 20
#define MAX_NUM_WORDS 1000

int add_word(char *words[], char str[], int *words_stored);
void print_words(char *words[], int len);
int str_compare(const void *a, const void *b);

int main(void)
{
    char str[MAX_STR_LEN];
    char *words[MAX_NUM_WORDS];
    int words_stored = 0;

    do
    {
        printf("Enter word: ");

        read_line(str, MAX_STR_LEN);

        if(!add_word(words, str, &words_stored))
            break;

    } while(str[0] != '\0');

    qsort(words, words_stored, sizeof(char *), str_compare);
    
    print_words(words, words_stored);

    return 0;
}

int add_word(char *words[], char str[], int *words_stored)
{
    if(str[0] == '\0')
        return 0;

    if(*words_stored == MAX_NUM_WORDS)
    {
        printf("-- Word limit reached --\n");
        return 0;
    }

    if(strlen(str) > MAX_STR_LEN)
    {
        printf("-- Word exceeds char limit (20) please try again... --");
        return 1;
    }

    words[*words_stored] = malloc(strlen(str) + 1);

    if(words[*words_stored] == NULL)
    {
        printf("-- Memory Error -- \n");
        return 0;
    }

    strcpy(words[*words_stored], str);

    (*words_stored)++;

    return 1;
}

void print_words(char *words[], int len)
{
    int i;

    for(i = 0; i < len; i++)
    {
        printf("%s ", words[i]);
    }

    printf("\n");
}

int str_compare(const void* a, const void* b)
{
    const char *ia = *(const char **)a;
    const char *ib = *(const char **)b;

    return strcmp(ia, ib);
}
