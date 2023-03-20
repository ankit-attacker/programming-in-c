#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  // TIME COMPARISON BETWEEN ITTERATIVE AND RECURSIVE APPROACH for calculationg fibonacci number

int i, a, b, d, n;
clock_t tr,ti;
int fib_i(int n)
{
    ti = clock();
    a = 0;
    b = 1;
    for (i = 1; i <= n; i++)
    {
        b = a + b;
        a = b - a; // a=(b+a)-a
    }
    return a;
     ti = clock() - ti;
}
int fib_r(int d)
{

    tr = clock();
    if (d == 0)
    {
        return 0;
    }
    else if (d == 1)
    {
        return 1;
    }
    else
    {
        d = fib_r(d - 1) + fib_r(d - 2);
        return d;
    }
     tr = clock() - tr;
}

int main()
{
    printf("Enter the value of n to calculate fib(n)\n");
    scanf("%d", &n);
    if(n==99)
    {
        exit(0);
    }

    if (n <= 20)
    {
        printf("calculating..\n");
    }
    else if (n > 20 && n <= 45)
    {
        printf("calculating...........\n");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("calculating.................................................\n");
        printf("...........................................\n");
        printf("\n");
        printf("\n");
    }
    printf("fib(%d) is %d\n", n, fib_i(n)); // itterative approach
    double time_taken_i = ((double)ti) / CLOCKS_PER_SEC; // in seconds
    printf("itterative approach took %f seconds to execute \n", time_taken_i);
    printf(" plz wait recursive may take more time\n");
    printf("fib(%d) is %.10d\n", n, fib_r(n)); // recursive approach

    double time_taken_r = ((double)tr) / CLOCKS_PER_SEC; // in seconds
    printf("recursive approach took %f seconds to execute \n", time_taken_r);
    printf("Enter 99 to exit\n");
    main();
    return 0;
}