/*
Bucket Sort Algorithm in C for sorting numbers from 0 to 10
*/
#include <stdio.h>

int main()
{
  int a[11], i, j, t;

  for (i = 0; i <= 10; i++)
    a[i] = 0; // initialize array to 0

  for (i = 1; i <= 5; i++) // read 5 numbers
  {
    scanf("%d", &t); // read a number
    a[t]++; // increment the corresponding index
  }

  for (i = 0; i <= 10; i++) // print the array
    for (j = 1; j <= a[i]; j++) // print the number i j times
      printf("%d ", i); // print the number
  
  return 0;
}


