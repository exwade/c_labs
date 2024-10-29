#include <stdio.h>

#define ROWS_X 9
#define COLS_X 6
#define SIZE_A 60

// Функция для вычисления сумм положительных и отрицательных элементов
void calculateSums(int rows, int cols, int matrix[rows][cols], int size, int array[size], int *S1, int *S2)
{
    *S1 = 0;
    *S2 = 0;

    // Сумма положительных элементов массива X
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] > 0)
            {
                *S1 += matrix[i][j];
            }
        }
    }

    // Сумма отрицательных элементов массива A
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            *S2 += array[i];
        }
    }
}

int main()
{
    int X[ROWS_X][COLS_X];
    int A[SIZE_A];
    int S1, S2;

    // Ввод элементов массива X
    printf("Введите элементы массива X (9x6):\n");
    for (int i = 0; i < ROWS_X; i++)
    {
        for (int j = 0; j < COLS_X; j++)
        {
            scanf("%d", &X[i][j]);
        }
    }

    // Ввод элементов массива A
    printf("Введите элементы массива A (60):\n");
    for (int i = 0; i < SIZE_A; i++)
    {
        scanf("%d", &A[i]);
    }

    // Вычисление S1 и S2
    calculateSums(ROWS_X, COLS_X, X, SIZE_A, A, &S1, &S2);

    // Вычисление Z
    double Z = (S1 + S2) / 2.0;
    printf("Z = %.2f\n", Z);

    return 0;
}
