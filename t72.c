// Function pointer in c     , are usefull to implement callback functions
// we can't allocate and deallocate memory using function poiinter  , it will point to code not date
#include<stdio.h>
#include<stdlib.h>

int sum (int a,int b)
{
  return a+b;
}

void greet()
{
  printf("Hello users how are you");
}

int main() 
{
    
       printf( "the sum of 1,2 is %d \n ", sum(1,2));// for testing the function
       int (*fptr) (int,int);                          // makig a function pointer
       fptr = &sum;                                    // pointing function pointer to function
       int d = (*fptr) (4,6);
       printf("The value of d is %d\n",d);

    return 0;
}