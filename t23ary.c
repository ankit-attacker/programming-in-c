#include <stdio.h>       // ARRAYS IN C LAN.

int main()
{
       printf("Hello Ankit Yadav ji , how are you\n");
    //  int marks[4];                      //1D array
    //   int marks[4]={ 45, 234,2,3};   // 1D array  direct initialization
    int marks[2][4]={{45, 234, 2,3},{3, 2, 5, 3} } ;// 2D  array

    /*for (int i = 0; i < 4; i++)        //for loop for 1D array initialization
    {
       printf("Enter the value of %d element of the array\n" , i);
       scanf("%d" , & marks[i]);
    }
*/ // for loop for 1D array  direct initialization printing
    /*  for (int i = 0; i < 4; i++)
      {
         printf("The value of %d element of the array is %d\n" , i , marks[i]);
      }*/


     /* for (int i = 0; i < 2; i++) // for loop for 2D array direct initialization
      {
          for (int j = 0; j < 4; j++) 
          {
              printf("The value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
          }
      }*/
           //  printing in matrix form
      for (int i = 0; i < 2; i++)        // for loop for 2D array direct initialization
      {
          for (int j = 0; j < 4; j++) 
          {
             printf("%d" ,marks[i][j]);
          }
          printf("\n");
      }
    /*
     marks[0]=34;
     printf ("marks of student 1 is %d\n", marks[0]);
     marks[0]=4;
     marks[1]=24;
     marks[2]=34;
     marks[3]=44;
     printf ("marks of student 1 is %d\n", marks[0]);*/
     return 0;
}
