/*

*/

#include <stdio.h>

int a[101], n;


void quicksort(int left, int right)
{
  int i, j, t, temp;

  if (left > right) 
    return;

  temp = a[left];
  i = left;
  j = right;

  while (i != j) {

    // порядок важен, сначала двигаемся справа налево
    while (a[j] >= temp && i < j) j--;

     // теперь слева направо
    while (a[i] <= temp && i < j) i++;

    // меняем местами два числа в массиве
    if (i < j) {
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }

  // возвращаемся к опорному числу
  a[left] = a[i];
  a[i] = temp;

  quicksort(left, i - 1); // продолжаем слева, идет рекурсивный процесс
  quicksort(i + 1, right); // продолжаем справа, идет рекурсивный процесс

  return;
}

int main() {
  int i, j;

  //считываем входные данные
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    scanf("%d", &a[i]);

  //выполняем сортировку
  quicksort(1, n);

  //выводим отсортированный массив
  for (i = 1; i <= n; i++)
    printf("%d ", a[i]);
    
  return 0;
}