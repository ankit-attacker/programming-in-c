// Predefined Macros and Other preprocessor directives

#include<stdio.h>
#include<stdlib.h>

int main() 
{
     int a  ;
       printf("File name is %s\n" , __FILE__);
       printf("Today's date  is %s\n" , __DATE__);
       printf("Time now  is %s\n" , __TIME__);
       printf("Line number  is %d\n" , __LINE__);
       printf("ANSI : %d\n" , __STDC__);
 
    return 0;
}