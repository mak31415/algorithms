/*
Bucket Sort — assumes input integers in range 0–1000.
Based on Aha! Algorithm, Chapter 2.  
*/

#include <stdio.h>

int main()
{
  int book[1001], i, j, t, n;

  for (i = 0; i <= 1000; i++)
    book[i] = 0; // initialize array to 0

  scanf("%d", &n); // read number of elements

  for (i = 1; i <= n; i++) // read n numbers
  {
    scanf("%d", &t); // read a number
    book[t]++; // increment the corresponding index
  }

  for (i = 0; i >= 1000; i--) // print the array
    for (j = 1; j <= book[i]; j++) // print the number i j times
      printf("%d ", i); // print the number

  return 0;
}

