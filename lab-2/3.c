#include <stdio.h>
#include <math.h>
#include <locale.h>

 int calculate_F(int a, int b, int c) {
 
    if (a*b > a*c && a*b > b*c) {
            return a*b;
    }

    if (b*c > a*b && b*c > a*c) {
            return b*c;
    }

    if (a*c > b*c && a*c > a*b) {
            return a*c;
    }

    
    
 }

int main(void)
{
    char *locale = setlocale(LC_ALL, "");

    int a, b, c, F;

     printf("Введите a: ");
    scanf("%d", &a);
    
    printf("Введите b: ");
    scanf("%d", &b);

    printf("Введите c: ");
    scanf("%d", &c);

    F = calculate_F(a, b, c);

    printf("Результат выполнения функции F при a = %d, b = %d, c = %d следующий: %d", a, b, c, F);

    return 0;
}
