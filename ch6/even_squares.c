/*A program that prints all even squares between 1 and
 * n, a user entered integer*/
#include <stdio.h>

int main(void)
{
   int num = getInput();
   int i = 2;

   for(; i*i<=num; i++)
   {
      if((i*i)%2 == 0)
      {
          printf("%d\n", i*i);
      }
   }

   return(0);
}

int getInput()
{
   int input;
   printf("Please enter an integer:");
   scanf("%d", &input);
   
   return input;
}
