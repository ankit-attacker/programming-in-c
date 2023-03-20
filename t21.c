// Writing program for factorial calculation of any number

#include <stdio.h>

int ftrl(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        n = n * ftrl(n - 1);
        return n;
    }
}

int main()
{
    int a;
    printf("Enter the number whose factorial you want to print\n");
    scanf("%d", &a);

    printf(" Factorial of %d\n is %d\n", a, ftrl(a));

    return 0;
}
