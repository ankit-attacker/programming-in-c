#include<stdio.h>  // VARIABLES IN C LANG.


int b = 34;   // this is a global variable since it is decleared outside main

int ret()
{
    return 43*3;
}
int func1(int b1)
{
    static int myvar=98;    //check without initializatioin;   //in place of 98 check with ret();
  //  int loc =35;   local to func1; // ret will give error bcz static need constant value not a function bcz 
    printf("The value of my var is %d\n", myvar);  // static need to allocate memory;
    myvar ++;                                        // because we have to initialize the static variable before running of 
  // printf("The value of b inside func1 is %d\n", b);   // main function, it will not execute any function before main
   //printf("The address of b inside func1 is %d\n" , &b);  // static directly need a constant leteral
   // return b*10;
   return b1 + myvar;
}


int main() 
{   
    int b= 344;
    register int val= func1(b); // value not changes after register;
     val= func1(b);
     val= func1(b);
     val= func1(b);
     int * ptr =&val;
     // printf("The address of b inside main is %d\n" , &b);
      // printf("The value of func1 is %d\n", val);
     //  printf("%d",loc);      will throw error bcz local variable of func1;

    return 0;
}