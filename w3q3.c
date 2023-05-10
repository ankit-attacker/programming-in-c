/*Week 3: Assignment 3 - Question 3
Due on 2023-02-16, 23:59 IST
In this question, you have to output the "two moving average" of a sequence of 
non-negative numbers.

The two moving average is the sequence of averages of the last 2 entries.
For the first number, no average is output.

For example, if the sequence of numbers is a1,a2,a3,a4,a5
The 2-moving average is  (a1+a2)2,(a2+a3)2,(a3+a4)2,(a4+a5)2
.

Input
-------
The input is a sequence of non-negative floating point numbers, terminated by a -1.
The -1 is not part of the sequence. There will be at least 3 numbers in the sequence.

Output
----------
You have to output the moving average of the sequence. The output should be printed
 correct to one digit after the decimal.
Hint : Use the format specifier "%.1f" inside printf.

Sample Input 1
---------------------
1 3 2 4 -1

Sample Output 1
-------------------------
2.0 2.5 3.0
Private Test cases used for evaluation	Input	Expected Output	Actual Output	Status
Test Case 1	
29 73 67 34 -1
 51.0 70.0 50.5 
51.0 70.0 50.5 
Passed
Test Case 2	
7 19 4 6 38 72 -1
 13.0 11.5 5.0 22.0 55.0 
13.0 11.5 5.0 22.0 55.0 
Passed
Test Case 3	
1 3 -1
 2.0
2.0 
Passed
Test Case 4	
1987 2020 1857 2001 -1
 2003.5 1938.5 1929.0
2003.5 1938.5 1929.0 
Passed*/

#include<stdio.h>
int main() 
{
   int i,n,a[];
   printf("Enter the size of array sequence");
   scanf(%d,&n);
     printf("Enter the elements of sequence ending with -1");
   for (i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
   }
    return 0;
}