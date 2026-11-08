#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
 
int kakaya_forma(int k);
 
int main()
{
    int k = 0;
    int forma;
 
    setlocale(LC_ALL, "Rus");
 
    printf("Введите количество ошибок k (от 1 до 19): ");
    scanf("%d", &k);
 
    forma = kakaya_forma(k);
 
    switch (forma)
    {
    case 1:
        printf("В программе найдена %d ошибка\n", k);
        break;
    case 2:
        printf("В программе найдено %d ошибки\n", k);
        break;
    case 5:
        printf("В программе найдено %d ошибок\n", k);
        break;
    default:
        printf("Ошибка! k должно быть натуральным числом меньше 20\n");
    }
 
    return 0;
}
 
int kakaya_forma(int k)
{
    int f;
 
    switch (k)
    {
    case 1:
        f = 1;
        break;
    case 2: case 3: case 4:
        f = 2;
        break;
    case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12:
    case 13: case 14: case 15: case 16: case 17: case 18: case 19:
        f = 5;
        break;
    default:
        f = 0;
    }
 
    return f;
}
 
