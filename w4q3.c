/*Week 4: Assignment 4 - Question 3
Due on 2023-02-23, 23:59 IST
Write a program that replaces the occurrence of a given character (say c) in a
primary string (say PS) with another string (say s).

Input
The first line contains the primary string (PS)
The next line contains a character (c)
The next line contains a string (s)

Output
Print the string PS with every occurence of c replaced by s.

NOTE:- There are no whitespaces in PS or s.
Maximum length of PS is 100. Maximum length of s is 10.
Private Test cases used for evaluation	Input	Expected Output	Actual Output	Status
Test Case 1	
ertytuvzzt
z
pqty
 ertytuvpqtypqtyt
ertytuvpqtypqtyt
Passed
Test Case 2	
mother
o
other
 motherther
motherther
Passed
Test Case 3	
sister
s
qq
 qqiqqter
qqiqqter
Passed
Test Case 4	
turbulent
m
nana
 turbulent
turbulent
Passed */

#include<stdio.h>
int main()
{
    char PS[1000], S[10], c;
    char *ptr=PS, *ptr2=S;
    int i=0;
    scanf("%s",ptr);
    getchar();
    scanf("%c",&c);
    putchar();
    //scanf("%s",ptr2);
    
   /* for( i=0;ptr[i]!='\0';i++)
    {
        if(ptr[i]==c)
        {
        printf("%s",ptr2);
        
        }
        else
        printf("%c",ptr[i]);
        
    }*/
return 0;    
}