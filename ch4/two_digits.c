#include <stdio.h>

int main(void)
{
   int input = getInput();
   printReverse(input); 

   return 0;
}

int getInput()
{
   int input;

   printf("Please enter a two digit integer:");
   scanf("%d", &input);

   return input;
}

printReverse(int input)
{
   int first = input%10;
   int second = input/10;

   printf("Your input, reversed,  is: %d%d\n", first, second);
}
