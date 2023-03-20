#include<stdio.h>
#include<string.h>      //FUNCTIONS OF  STRING IN C


int main() 
{
     char s1[] ="amit";
     char s2[] = "naman";
     char s4[] ="inkit";
     char s5[] = "harry";
     char s6[] = "ankit";
     char s7[] = "barry";
     char s3[54];
      printf("The strcmp for s4,s5 returned %d \n", strcmp(s4,s5));   // s5 ,h>i  1
      printf("The strcmp for s6,s7 returned %d \n", strcmp(s6,s7));  // a>b s6 -1   
      //both string same then return 0,1,-1;

     puts(strcat(s1,s2));   //concatination of both string
     puts(strcat(s4,s5));
     printf("The length of s1 is %d\n",strlen(s1));

     printf("The reversed string s1 is :\n");
     puts(strrev(s1));
     puts(strrev(s2));
       //  not allowed   s3= strcat(s1,s2);
     strcpy(s3,strcat(s1,s2));
     puts(s3);

    return 0;
}