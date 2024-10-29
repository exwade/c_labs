#include <stdio.h>

int main()
{
    int N;
    printf("Введите число N: ");
    scanf("%d", &N);

    while (N > 1 && N % 5 == 0)
    {
        N /= 5;
    }

    if (N == 1)
    {
        printf("Число является степенью пятёрки.\n");
    }
    else
    {
        printf("Число не является степенью пятёрки.\n");
    }

    return 0;
}
