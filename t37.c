// STRUCTURES IN C PROGRAMMING

#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;

typedef unsigned long ul; // typedef <old_name> <new_name>;
ul l1, l2, l3;

int main()
{

    int *a,b ;  // a is defined as pointer but b as integer
    typedef int* intpointer;
    intpointer a,b;     // now both defined as pointer
    int c =89;
    a=&c;
    b=&c;

    struct Student ankit, harry, amit;
    ankit.id = 1;
    harry.id = 2;
    amit.id = 3;
    ankit.marks = 100;
    harry.marks = 90;
    amit.marks = 80;
    strcpy(ankit.name, "ankit yadav the best");
    printf("Ankit got %d marks\n", ankit.marks);
    printf("Ankit's new name is %s\n", ankit.name);
  
    typedef int integer;
    integer a = 4;
    printf("%d\n",a);

    std s1,s2;
    s1.id=34;
    s2.id=56;
    printf("value of s1's id is %d\n",s1.id);
    return 0; 
}