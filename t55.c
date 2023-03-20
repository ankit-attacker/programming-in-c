// WILD Pointer - Uninitialized pointe is known as wild pointer
   
#include<stdio.h>
int main() 
{
int a=3;
int * ptr;    // Uninitialized  , Suggested to make wild pointer as null;
 //*ptr=34;      // This is not a good thing to do                  
ptr=&a;         // no longer wild bcz we initialized address of a ;

       printf( "The value of a is %d \n", *ptr);


    return 0;
}