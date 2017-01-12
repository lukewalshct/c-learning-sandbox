/*
 * Sample program that determines if there are repeat 
 * digits in a user inputted integer. Assumes corrrect
 * input.
 */

#include <stdio.h>
#define true 1
#define false 0
typedef int bool;

void print_duplicates(int *arr, int lim)
{
   bool isDups = false;  

   printf("Repeated digits:");
   
   int i;

   for(i = 0 ; i < lim; i ++)
   {
       if(arr[i] > 1)
       {
           printf(" %d,", i);
           isDups = true;
       }
   }

   if(!isDups) printf(" none");
   printf("\n");

   return;
}

int main(void)
{
   int input;
   int digits_seen[10] = {0};
   
   printf("Please enter an integer: ");

   scanf("%d", &input);

   while(input > 0)
   {      
      digits_seen[input%10] += 1;
      input = input/10;
   }

   int lim = (int)(sizeof(digits_seen)/sizeof(digits_seen[0]));

   print_duplicates(digits_seen, lim);

   return 0;

}
