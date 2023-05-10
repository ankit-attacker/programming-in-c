Week 1: Assignment 1 - Question 1
Due on 2023-02-09, 23:59 IST
You have a certain number of 100 rupee notes, 10 rupee notes and 1 rupee notes with you.
There is an item you want to buy whose price is given to you.
Write a program to find if the item is affordable, that is the price of the item is less than or equal to the current money you have.


Input
-----
Four non negative integers. 
The first input is an integer representing the number of 100 rupee notes.
The second input is an integer representing the number of 10 rupee notes.
The third input is an integer representing the number of 1 rupee notes.
The fourth input is an integer representing the price of the item.

Output
------
You have to output 1 if the item is affordable.
You have to output 0 if the item is not affordable. 

Private Test cases used for evaluation	Input	Expected Output	Actual Output	Status
Test Case 1	
7 7 0 770
 1
1
Passed
Test Case 2	
0 0 0 0
 1
1
Passed
Test Case 3	
19 12 10 2030
 1
1
Passed
Test Case 4	
1 1 1 1000
 0
0
Passed
Test Case 5	
5 333 1 3832
 0
0
Passed


#include <stdio.h>
void main()
{
  int h, t, o, price,current_money;
  scanf("%d %d %d %d", &h, &t, &o, &price);
  current_money = 100*h+10*t+o;
  if(price <= current_money)
    printf("1");
  else
    printf("0");
}