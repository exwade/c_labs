#include <stdio.h>
#include <math.h>
#include <locale.h>

int calculate_R(int m, int k) {
    return k > 0 ? m / k : k <= 0 && m < 0 ? abs(m + k) : k*m;
}


int main(void)
{
    char *locale = setlocale(LC_ALL, "");
    int m, k, R;

    printf("Введите m: ");
    scanf("%d", &m);
    
    printf("Введите k: ");
    scanf("%d", &k);

    R = calculate_R(m, k);

    printf("Результат выполнения функции r при m = %d и k = %d: %d\n", m, k, R);

    return 0;
}