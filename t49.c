#include<stdio.h>
#include "ankit.c"      // In another file 'ankit.c' sum is defined as 433 and we are using that here;
extern int  external;
 int  sum=344;
int myfunc(int a, int b )
{
    //auto int sum;
    extern int sum;
   sum = a+b;
    return sum;
}


 int main() 
{
     int a , sum = myfunc(3,5);
       printf("The sum is %d\n",  sum );
    // Difference between declaration- Telling the compiler about the variable(No space reserved)
     // and deifinition -              Decleration + Space reservation
      
      // Use of external variable

      printf("%d\n",external);

    return 0;
}