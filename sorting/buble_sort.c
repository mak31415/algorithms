/*
Bubble Sort Algorithm in C
*/
#include <stdio.h>
int main()
{
    int a[100],i,j,t,n;
    scanf("%d",&n); // n -- количество чисел
    for(i=1;i<=n;i++) // цикл ввода n чисел в массив a
        scanf("%d",&a[i]);
    // Основная часть сортировки пузырьком
    for(i=1;i<=n-1;i++) // сортировка в n-1 проходов
    {
        for(j=1;j<=n-i;j++)
    // сравниваем с позиции 1 до n-i, то есть последнего числа,
    // позиция которого не определена
        {
            if(a[j]<a[j+1]) // сравниваем и меняем местами
            { t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
        }
    }
    for(i=1;i<=n;i++) // вывод результатов
        printf("%d ",a[i]);
    
return 0; 
}