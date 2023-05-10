Week 2: Assignment 2 - Question 1
Due on 2023-02-09, 23:59 IST
You are given a non-negative sequence of numbers, ending with a -1. You can
assume that there are at least two numbers before the ending -1. 

You have to output the second largest element of the sequence.
If there is no second largest element in the sequence then output 0.

Note : -1 is not a part of input. It only signifies that input has ended.
Private Test cases used for evaluation	Input	Expected Output	Actual Output	Status
Test Case 1	
1 2 3 4 -1
 3
3
Passed
Test Case 2	
1 5 5 -1
 1
1
Passed


#include <stdio.h>
int main()
{
  int largest = 0, second = 0;
  int n = 0;

  while (1)
  {
    scanf("%d", &n);
    if (n == -1)
    {
      printf("%d", second);
      break;
    }
    if (n > largest)
    {
      second = largest;
      largest = n;
    }

    else if (n > second && n != largest)
    {
      second = n;
    }
  }
  return 0;
}