#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;
    int i, j;
    char symbol = '*';

    printf("¬ведите длину стороны треугольника: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == a || j == 1 || j == 2 * i - 1)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }


    return 0;
}