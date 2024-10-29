#include <stdio.h>

int main()
{
    int M[15];   // Одномерный массив из 15 элементов
    int X, Y;    // Границы диапазона
    int sum = 0; // Переменная для хранения суммы

    // Ввод элементов массива с клавиатуры
    printf("Введите 15 элементов массива:\n");
    for (int i = 0; i < 15; i++)
    {
        printf("Элемент %d: ", i + 1);
        scanf("%d", &M[i]);
    }

    // Ввод диапазона значений [X, Y]
    printf("Введите диапазон [X, Y]:\n");
    printf("X = ");
    scanf("%d", &X);
    printf("Y = ");
    scanf("%d", &Y);

    // Обработка и вычисление суммы элементов, попадающих в диапазон
    for (int i = 0; i < 15; i++)
    {
        if (M[i] >= X && M[i] <= Y)
        { // Проверка условия попадания в диапазон
            sum += M[i];
        }
    }

    // Вывод результата
    printf("Сумма элементов, лежащих в диапазоне [%d, %d]: %d\n", X, Y, sum);

    return 0;
}