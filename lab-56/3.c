#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 7;
    int **matrix;

    // Динамическое выделение памяти для матрицы 7x7
    matrix = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++)
    {
        matrix[i] = (int *)malloc(size * sizeof(int));
    }

    // Ввод элементов матрицы с клавиатуры
    printf("Введите элементы матрицы 7x7:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Элемент [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum_main_diagonal = 0;
    int sum_secondary_diagonal = 0;

    // Вычисление сумм элементов на главной и побочной диагоналях
    for (int i = 0; i < size; i++)
    {
        sum_main_diagonal += matrix[i][i];                 // Главная диагональ
        sum_secondary_diagonal += matrix[i][size - i - 1]; // Побочная диагональ
    }

    int difference = sum_main_diagonal - sum_secondary_diagonal;
    printf("Разность между суммами главной и побочной диагоналей: %d\n", difference);

    // Освобождение памяти
    for (int i = 0; i < size; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
