#include <stdio.h>
#include <math.h>

#define N 10

// Подынтегральные функции
double f1(double x)
{
    return 1 / sqrt(5 - x * x * x);
}

double f2(double x)
{
    return x * x * x - 2 * x + 4;
}

// Функция для вычисления интеграла методом парабол
double Integral(double (*func)(double), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = func(a) + func(b);

    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        sum += (i % 2 == 0 ? 2 : 4) * func(x);
    }

    return (h / 3) * sum;
}

int main()
{
    double result1 = Integral(f1, -2 * sqrt(5), 1, N);
    double result2 = Integral(f2, -1, 3, N);

    printf("Результат первого интеграла: %.5f\n", result1);
    printf("Результат второго интеграла: %.5f\n", result2);

    return 0;
}
