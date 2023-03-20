#include<stdio.h>
//#include "t54.c"
#define PI 3.14
#define SQUARE(r)  r*r


int main() 
{
     int  var=0;
     int r=4;
     float variable = PI;
    // int * ptr=funcdangling();
     printf(" The value of  PI IS  %d" ,var);
     printf(" The value of  PI IS  %f" ,variable);
     printf(" The area of circle IS  %f" ,PI *SQUARE(r));

    return 0;
}