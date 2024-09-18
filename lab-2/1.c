#include <stdio.h>
#include <math.h>
#include <locale.h>

double calculate_F(double x) {
    // Числитель
    double numerator = sqrt(1 + sqrt(fabs(x)) + log(pow(x, 3)));
    // Знаменатель
    double denominator = 1 - ((2 * pow(x, 2) - 1) / (2 * x));

    // Вычисление
    double F = numerator/denominator + pow(10, 4) * pow(cos(x), 2);

    return F;
}


int main (void)
{
    char *locale = setlocale(LC_ALL, "");
    
    double x;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    if (x == 0) {
        printf("Ошибка: деление на 0 невозможно!\n");
        return 1;
    }

    double F = calculate_F(x);

    printf("Значение F при x = %lf: %lf\n", x, F);

    return 0;
}

