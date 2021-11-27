#include <stdio.h>
#include <locale.h>

int main()
{
    int x, n;
    setlocale(LC_ALL, "");

    printf("Digite um numero: \n");
    scanf("%d", &n);

    if (n > 0)
    {
        for (x = n; x >= 0; x--)
            printf("%d\n", x);
    }

    return 0;
}


