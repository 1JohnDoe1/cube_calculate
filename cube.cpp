#include <stdio.h>
#include <stdlib.h>
int correctValue(int, int);
int cube(int);
int main() {
   int x = 0;
   int y = 0;
   printf("Введите число: ");
   x = correctValue(1, 100);
   y = cube(x);
   printf("Результат: %d", y);
   return 0;
}
int cube(int number)
{
    int x = 0;
    x = number * number * number;
    return x;
}
int correctValue(int min, int max)
{
    int value = 0;
    char enter = '\0';
    do
    {
        while (scanf("%d%c", &value, &enter, 1) != 2 || enter != '\n')
        {
            printf("Ошибка! Введите только целые положительные числа: ");
            while (getchar() != '\n');
        }
        if (value < min || value > max)
        {
            printf("Ошибка! Введите значения от %d до %d: ", min, max);
        }
    } while (value < min || value > max);
    return value;
}
