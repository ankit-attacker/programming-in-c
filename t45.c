//  DYNAMIC MEMORY ALLOCATION (Important)      // gcc t45.c ; size .\a.exe    both command can run at a time
                                                //size command tells command in bytes;

#include<stdio.h>
#include<stdlib.h>

int main() 
{
    /* use of malloc
    int  * ptr;
    int n;
    printf("Ente the size of array you want to create\n");
    scanf("%d",&n);

    ptr = (int *) malloc (n *sizeof(int)); 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of the array\n" ,i);
        scanf("%d",&ptr[i]);

    }
     
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of the array is %d \n" , i, ptr[i]);

    }*/
     
     // Use of calloc

      int  * ptr;
    int n;
    printf("Ente the size of array you want to create\n");
    scanf("%d",&n);

    ptr = (int *) calloc (n , sizeof(int)); 
    for (int i = 0; i < n; i++)                  // ish for loop ko comment out kr ke program chalane pe all value 
    {                                             // 0 se initialize ho jayega that is extra overhead of calloc;
        printf("Enter the value no %d of the array\n" , i);  // it will add inefficiency in our program
        scanf("%d",&ptr[i]);

    }
     
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of the array is %d \n" , i, ptr[i]);

    }

    // use of realloc

    printf("Enter the size of new array you wnat to create",&n);
    scanf("%d",&n);

    ptr = (int *) realloc (ptr , n*sizeof(int)); 
    for (int i = 0; i < n; i++)         
    {                                            
        printf("Enter the new value no %d of the array\n" , i);  
        scanf("%d",&ptr[i]);

    }
     
    for (int i = 0; i < n; i++)
    {
        printf("The new value of %d of the array is %d \n" , i, ptr[i]);

    }

free (ptr);
       
    return 0;
}