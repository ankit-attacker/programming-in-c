#include<stdio.h>           // FUNCTIONS


 //int sum(int a, int b)     implicit decleration of function
 int sum(int a, int b);    // Funcn type 1. with parameter with return value
 //    {
//     return a+b;
//     }

 void printstar(int n)      // type2. with parameter without return value
 {
      for (int i=0; i<n; i++)
      {
        printf("%c\n", '*');   //star is a character so we have to use single courts;
      }  
 }
 int takenumber()             // type 3. without parameter with return value
 {
    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    return i;
 }
                                   //QUIZ type 4. without parameter without return value
          int multiply()
            {
              int p,q,r;
              scanf("%d%d",&p,&q);
              r=p*q;
              printf("%d",r);
            }
int main( )
{
    int a,c,b;
    a=9;
    b=87;
    c=sum(a,b);
    printf(" The sum is %d\n",c);
     printstar(7);
     c=takenumber();
     printf("The number is %d\n" , c);
     multiply();
    return 0;
}
 int sum(int a, int b)
     {
     return a+b;
    }
