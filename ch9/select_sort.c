/*
 * A simple C program that sorts a user-entered array and 
 * prints the results. Meant to demonstrate use of functions
 * in C.
 */

#include <stdio.h>
#define LEN 10

void selection_sort(int l, int[l]);

int main(void)
{
   printf("Please enter %d integers to be sorted: ", LEN);

   int input[LEN];

   int i;

   for(i = 0; i < LEN; i++)
      scanf("%d", &input[i]);

   selection_sort(LEN, input);

   for(i = 0; i < LEN; i++)
      printf("%d, ", input[i]);

   printf("\n");

   return 0;
}

void selection_sort(int l, int  arr[l])
{
   if(l <= 1) return;

   int i;

   int index_largest = 0;

   for(i = 1; i < l; i++)
   {
       if(arr[i] > arr[index_largest])
          index_largest = i;
   }

   int temp = arr[l-1];

   arr[l-1] = arr[index_largest];

   arr[index_largest] = temp;

   selection_sort(l-1, arr);   
}

