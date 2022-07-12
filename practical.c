#include <stdio.h>
#include <locale.h>
#include "functional.h"

int main()
{
    setlocale(LC_ALL, "Rus");

    float a, b, x1, y1, x2, y2, x3, y3, x4, y4;

    printf("Введите a: ");
    scanf_s("%f", &a);
    printf("Введите b: ");
    scanf_s("%f", &b);
    printf("Введите x1: ");
    scanf_s("%f", &x1);
    printf("Введите y1: ");
    scanf_s("%f", &y1);
    printf("Введите x2: ");
    scanf_s("%f", &x2);
    printf("Введите y2: ");
    scanf_s("%f", &y2);

    x3 = 100 / a;
    y3 = 100 + b;
    x4 = x3 * -1;
    y4 = y3 * -1;

    if (cross(x1, y1, x2, y2, x3, y3, x4, y4)) {
        printf("\nПересекаются\n");
    }
    else {
        printf("\nНе пересекаются\n");
    }
}

