#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    float x, y;
    char c;

    setlocale(LC_ALL, "Rus");

    printf("Калькулятор\n");
    printf("Операции: + - * / ^ (степень) %% (остаток от деления)\n");
    printf("Введите пример без пробелов (например 5+3): ");
    if (scanf("%f%c%f", &x, &c, &y) != 3)
    {
        printf("Ошибка! Пример введен неправильно\n");
        return 1;
    }

    switch (c)
    {
    case '+':
        printf("%g + %g = %f\n", x, y, x + y);
        break;
    case '-':
        printf("%g - %g = %f\n", x, y, x - y);
        break;
    case '*':
        printf("%g * %g = %f\n", x, y, x * y);
        break;
    case '/':
        if (y == 0)
            printf("Ошибка! На ноль делить нельзя\n");
        else
            printf("%g / %g = %f\n", x, y, x / y);
        break;
    case '^':
        if (x == 0 && y < 0)
            printf("Ошибка! Ноль нельзя возводить в отрицательную степень\n");
        else
            printf("%g ^ %g = %f\n", x, y, pow(x, y));
        break;
    case '%':
        if (y == 0)
            printf("Ошибка! На ноль делить нельзя\n");
        else
            printf("%g %% %g = %f\n", x, y, fmod(x, y));
        break;
    default:
        printf("Ошибка! Неизвестная операция '%c'\n", c);
    }

    return 0;
}
