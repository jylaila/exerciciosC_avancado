#include <stdio.h>

int mdc(int num1, int num2);

int main()
{

    printf("%d", mdc(12, 18));
}

int mdc(int num1, int num2)
{
    if (num2 != 0)
    {
        return mdc(num2, num1 % num2);
    }
    else
        return num1;
}