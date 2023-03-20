#include <stdio.h>
#include <stdlib.h>

int sum (int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int)){
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
    
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
    int (*ptr)(int, int);
    // int *ptr(int, int);      // wrong syntax , isko lagega ek function hai ptr name ka jo ki 2 input leta hai
    ptr = sum;                  // or return karta hai ek pointer to integer
    greetHelloAndExecute(ptr);
    return 0;
}
