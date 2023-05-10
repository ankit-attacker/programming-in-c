/*Week 1: Assignment 1 - Question 3
Due on 2023-02-09, 23:59 IST
Given three integers a b and c, find if they are strictly increasing/decreasing or not.
 
Input
-------
Triplet of three integers (a,b,c)

Output
---------
You have to output 1 if they are either in strictly increasing (a>b>c) or decreasing (a<b<c) order.
Output 0, otherwise*/

#include<stdio.h>
int main() 
{
     int a,b,c;
       printf("Enter three integers to check whether they are in strictly increasing or' decreasing  order" );
       scanf("%d%d%d",&a,&b,&c);
       if (a>b&&b>c||a<b && b<c)
       {
        printf("Entegeres entered by you is in increasing or' decresing order");
       }
       else
       {
        printf("Entegeres entered by you is not in order");
       }
    

    return 0;
}