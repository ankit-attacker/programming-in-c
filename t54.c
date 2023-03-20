//DANGLING POINTER - Hanging  ;Pointing to deleted memory location
#include<stdio.h>
int sum = 34;
int * funcdangling()
{
    int a,b, sum2;
    a=34;
    b=364;
    sum2 = a+b;
    return a;        // returning local variable in function cALL
}

int main2() 
{
    //case1:Deallocation of memory block
    int *ptr=(int *) malloc(7* sizeof(int));
     ptr[0] = 34;
     ptr[1] = 54;
     ptr[2] = 35;
     ptr[3] = 5;
     free(ptr);    // ptr is now dangling pointer
        ptr= NULL;  // ptr no more dangling
       
       /*case2: Function retruning local variable address
      int * dangPtr = funcdangling();        // dangptr is now dangling pointer 

        int * danglingptr3;
        // case3:  If a variable goes out of scope;
        {
            int a =12;

            danglingptr3 = &a;     //Pointing to a invalid location bcz a is local variable 
        }// and it is destroyed, Here variable a goes out of scope which means dangliingptr3
        / is pointing to a location  which is freed and hence danglingprt3 is now a dangling pointer;*/
    return 0;
}