#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    Print a multiplication table of a number entered by 
    the user in   pretty form
        Enter the number that you want multiplication table of 
        input:
        6
        output:
        table of 6
        6x1=6
        6x2=12
        .
        .     */
       int a,i,c;
       printf("Enter the number whose table you want to print\n");
       scanf("%d", &a );

       for (i=1; i<=10 ; i++)
          {
            c=a*i;
            printf("%d x %d = %d\n" ,a,i,c);
          }

       //you take 7:48 sec to write this code

    return 0;
}
