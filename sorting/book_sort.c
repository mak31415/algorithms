/*
Первый вариант задачи: сначала отсортировать номера ISBN n книг, 
затем упорядочить их от меньшего к большему и вывести.
*/

#include <stdio.h>

int main()
{
  int a[1001], n, i, t;
  for ( int i = 1; i <= 1000; i++)
    a[i] = 0; // initialize array to 0

  scanf("%d", &n); // read number of elements

  for (i = 1; i <= n; i++) // read n numbers
  {
    scanf("%d", &t); // read a number
    a[t] = 1; // increment the corresponding index
  }
  
  for (i = 1; i <= 1000; i++) // print the array
    if (a[i] == 1) // print the number i j times
      printf("%d ", i); // print the number

return 0; 
} 

