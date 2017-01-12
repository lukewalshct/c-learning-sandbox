/*
 * Simple programs that determines whether a user-entered string
 * of braces {} and parentheses () are correctly matched. Assumes
 * input is valid (i.e. only (){}).
 */


#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define TRUE 1
#define FALSE 0;

typedef int bool;

/*global variables*/
char stack[STACK_SIZE];
int top = 0;

bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void invalid(void);
void check_input(char c);

int main(void)
{
    char c;

    printf("Enter a sequence of parentheses and/or braces: ");

    c = getchar();

    while(c != '\n')
    {
        if(c == '('  || c == '{')
            push(c);
        else if (c == ')' || c == '}')
            check_input(c);        
 
        c = getchar();
    }

    if(!is_empty())
        invalid();
    else
        printf("Parentheses/braces ARE nested properly\n");
}

void check_input(char c)
{
    char top_char = pop();

    if(c == ')' && top_char != '(' ||
        c == '}' && top_char != '{')
        invalid();
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char c)
{
    if(is_full())
    {
        printf("The sequence is too large. Program ending...\n");
        exit(0);
    }
    else
        stack[top++] = c;
}

char pop(void)
{
    if(is_empty())
    {
        invalid();
    }
    else
    {
        return stack[--top];
    }
}


void invalid(void)
{
    printf("Parentheses/braces are NOT nested properly\n");
    exit(0);
}
