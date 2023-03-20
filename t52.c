// VOID POINTER  - we can store any variable address after creating; // General purpose pointer variable

#include<stdio.h>
int main() 
{
     int a=345;
     float b = 8.3;
     int *ptr;
     void *ptr1;    // bcz ptr1 is general purpose pointer variable
     ptr = &a;
     //ptr1=&a;
     ptr1=&b;

       printf("The value of a is %d\n",*ptr );
        // printf("The value of a is %d\n",*ptr1);  giving error because ptr1 is a void pointer
           printf("The value of a is %d\n", *(  (int*)ptr1   ));  // ptr1 tum ab ek integer pointer ho
           printf("The value of a is %f\n", *(  (float*)ptr1   ));  // ptr1 tum ab ek float  pointer ho


    return 0;
}