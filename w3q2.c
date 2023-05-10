/*Week 3: Assignment 3 - Question 2
Due on 2023-02-16, 23:59 IST
Write a C function to find the kth occurrence of an odd integer in a sequence of non-
negative integers, and then call your function from main.

Your function should be according to the following declaration:
int find_odd(int k);

Input
--------
You are given the input in two lines:

The first line contains a positive integer k.

In the second line, you will be given a sequence of numbers terminated with a -1.
You have to find the kth occurrence of an odd integer in the sequence.

Note:  The -1 is not part of the sequence.

Output
----------
If there are k odd numbers in the sequence, then output the kth occurrence of an odd number
 in the sequence, if present.  If there are less than k odd numbers in the sequence, output -1.

Sample Input
------------------
2
1 4 3 6 5 2 3 4 1 -1

Sample Output
--------------------
3
Private Test cases used for evaluation	Input	Expected Output	Actual Output	Status
Test Case 1	
3
1 4 3 6 5 4 1 -1
 5
5
Passed
Test Case 2	
1
1 -1
 1
1
Passed
Test Case 3	
2
4 1 8 6 2 -1
 -1
-1
Passed*/

/*#include<stdio.h>
int main() 
{
     int i=0,b=2;
     int a [15];
       printf( " Enter all integers ending with -1");
      while(a[i]!=-1)
      {
       scanf("%d",&a[i]);
        printf("\n");
        }
       printf("Enter which occurence of odd no. you want to print");
       scanf("%d",&b);

      do
      {
        i=0;
       if (a[i]%2==0)
       {
        i++;
       }
       else
       {
        int count=0;
         count+=1;
         i++;
         if (count==b)
         {
            printf("The %d occurence of odd numbers is %d",b,a[i]);
         }
       }
       } while (i!=-1);
    
    return 0;
}*/  // I tried my best nothing happen;

#include <stdio.h>

void find_odd(int k) {
  int odd_count = 0;
  int curr;

  scanf("%d", & curr);
  while (curr != -1) {
    if (curr % 2 == 1) {
      odd_count = odd_count + 1;
      if (odd_count == k) {
        printf("%d", curr);
        return;
      }
    }
    scanf("%d", & curr);
  }
  printf("-1");
  return;
}

int main() {
  int k;
  scanf("%d", & k);
  find_odd(k);
  return 0;
}