#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
  
     // PI =3.744;    can't do since pi is  a constant
    int a =8;
    float b= 7.333;
    const float c= 7.333;
       //  c= 7.22; since c is a constant , we cant do this
    printf("Hello Ankit Yadav ji , how are you\n");
    printf("the value of a is %d and the value of b is %.4f\n" , a , b);    
    printf("the value of a is %d and the value of b is %10.4f\n" , a , b);
    printf(" %-20.8f\\",b);
    printf(" %-18.8fthis\\n \n",b);              //useful for printing output  patterns
    printf(" %18.8fthi\a\a\a\a\a\a\a\as\\n \n",b);        //useful for printing output  patterns
        /* different format specifiers

        %c  -  char
        %d  -   int
        %f  -   float
        %e  -  long 
        %lf  - double

        */
        
        //ESCAPE Sequenece in c    eg.  \n,\a - alarm or beep , \t -tab;
   
   
   
   
   
      return 0;
}
