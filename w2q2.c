/*Week 2: Assignment 2 - Question 2
Due on 2023-02-09, 23:59 IST
You are given a non decreasing sorted sequence of non negative integers, ending with -1.
That is if the sequence is a1,a2,…,an,−1
 then  ai≤ai+1
 for all i from 1 to n-1.
You can assume that are at least two numbers before the ending -1.
You have to output the number of distinct elements in the sorted sequence.
Private Test cases used for evaluation	Input	Expected Output	Actual Output	Status
Test Case 1	
1 1 1 1 -1
 1
1
Passed
Test Case 2	
1 2 -1
 2
2
Passed
Test Case 3	
1 1 -1
 1
1
Passed
Test Case 4	
1 2 3 4 5 -1
 5
5
Passed
Test Case 5	
1 2 3 3 4 4 5 -1
 5
5
Passed*/


#include <stdio.h>

int main() {
  int curr = 0; /* current value being read */
  int prev = 0; /* previous value read */
  int num_distinct = 0; /* number of distinct values read */
  
  scanf("%d", & curr);
  num_distinct = 1;
  
  while (curr != -1) {
    prev = curr;
    scanf("%d", & curr);
    if (prev != curr && curr != -1) {
      num_distinct = num_distinct + 1;
    }
  }
  printf("%d", num_distinct);
  return 0;
}