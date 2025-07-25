/*
Реализация алгоритма сортировки пузырьком в C для студентов.
*/

#include <stdio.h>

struct student
{
 char name[21];
 int score; 
};

int main()
{
    struct student a[100],t;
    int i,j,n;
    scanf("%d",&n); // n -- количество студентов
    for(i=1;i<=n;i++) // цикл ввода n студентов в массив a
    {
        scanf("%s %d",a[i].name,&a[i].score);
    }
    // Основная часть сортировки пузырьком
    for(i=1;i<=n-1;i++) // сортировка в n-1 проходов
    {
        for(j=1;j<=n-i;j++)
        // сравниваем с позиции 1 до n-i, то есть последнего студента,
        // позиция которого не определена
        {
            if(a[j].score<a[j+1].score) // сравниваем и меняем местами
            { t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
        }
    }
    for(i=1;i<=n;i++) // вывод результатов
        printf("%s\n",a[i].name);
    
return 0; 
}   
