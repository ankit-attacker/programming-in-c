/*Week 1: Assignment 1 - Question 2
You are given two positive integers, say M and N.
Check whether M is an exact multiple of N, without using loops.

Input  (7,7), (2,8), (6194,326), (6194,17);
-----
Two positive integers, say M and N.

Output (1),(0),(1)(0;)
------
You have to output 0 if M is not a multiple of N.
You have to output 1 if M is a multiple of N.*/

#include<stdio.h>
int main() 
{
     int a,b;
       printf("Enter two integers we will tell is 1st is multiple of 2nd or not\n" );
       scanf("%d%d",&a,&b);
      /* if (a<b)     // Iske bina bhi kaam ho jayega , ye extra code qyu likh raha hai
       {
        printf("1st no. is not multiple of 2nd no.: 0\n");     
       }
       else*/
       
        if (a%b==0)
        {
            printf("1st no. is exact multiple of 2nd : 1 \n");
        }
        else
        {
         printf("1st no. is not multiple of 2nd no.: 0\n");
        }
       
    return 0;
}

