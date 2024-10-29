#include <stdio.h>

int main()
{
    int rows, cols;

    // Ввод размеров матрицы
    printf("Введите количество строк: ");
    scanf("%d", &rows);
    printf("Введите количество столбцов: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Определяем двумерный массив

    // Заполнение матрицы произведениями порядковых номеров её элементов
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = (i + 1) * (j + 1); // Индексы начинаются с 1
        }
    }

    // Вывод матрицы с выравниванием
    printf("Матрица произведений порядковых номеров:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d", matrix[i][j]); // Выравнивание по ширине 4
        }
        printf("\n");
    }

    return 0;
}
