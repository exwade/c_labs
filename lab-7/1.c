#include <stdio.h>

#define ROWS_A 10
#define COLS_A 15
#define ROWS_B 15
#define COLS_B 10

// Проверка, является ли число совершенным
int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

// Замена совершенных чисел на нули
void replacePerfectNumbers(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (isPerfect(matrix[i][j]))
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// Функция для вывода матрицы
void printMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[ROWS_A][COLS_A];
    int B[ROWS_B][COLS_B];

    // Инициализация матриц (для теста можно ввести значения вручную)
    printf("Введите элементы матрицы A (10x15):\n");
    for (int i = 0; i < ROWS_A; i++)
        for (int j = 0; j < COLS_A; j++)
            scanf("%d", &A[i][j]);

    printf("Введите элементы матрицы B (15x10):\n");
    for (int i = 0; i < ROWS_B; i++)
        for (int j = 0; j < COLS_B; j++)
            scanf("%d", &B[i][j]);

    // Замена совершенных чисел на нули
    replacePerfectNumbers(ROWS_A, COLS_A, A);
    replacePerfectNumbers(ROWS_B, COLS_B, B);

    // Вывод измененных матриц
    printf("Матрица A после замены:\n");
    printMatrix(ROWS_A, COLS_A, A);

    printf("Матрица B после замены:\n");
    printMatrix(ROWS_B, COLS_B, B);

    return 0;
}
