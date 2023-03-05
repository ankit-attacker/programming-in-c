
#include<stdio.h>   //Pointers

int main()
{
    printf("Let's learn about pointer\n");
    int a=76;
    int*ptra=&a;

    printf("The value of a is %d\n", *ptra);
    printf("The address of a is %x\n", *ptra);         // to print address in hexadecimal
    printf("The address of value  which is on * ptra (means a ) in hexa is %p\n", *ptra);         
    printf("The address of a in hexa is %x\n", a);         
    printf("The address of a is %x\n", ptra);     
    printf("The address of a is %p\n", ptra);         //              |  
    printf("The address  a  is %p\n", &a);              //   both same|
    printf("The address of pointer to a  is %p\n", &ptra);         // %p - format specifier to print the pointer
    
     int *ptr1= NULL;
    printf("The address of a is %x\n", ptr1);                     //null pointer   
    printf("The address of a is %d\n", ptr1);                     //null pointer   
    printf("The address of a is %p\n", ptr1);                     //null pointer   
    return 0;

}
