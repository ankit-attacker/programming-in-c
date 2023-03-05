#include<stdio.h>



int main( )
{
   // label:
    //printf("Hello Ankit Yadav ji , how are you\n");
    //goto end;

    //printf(" hello ankit ji");

   // goto label;
   // end:
   // printf("we are at the end");

      int num;
      for (int i = 0; i < 8; i++)
      {
        printf("%d\n", i);

        for (int j = 0; j< 8; j++)
        {
           printf("Enter the number.Enter 0 to exit");
           scanf("%d" , & num);

           if ( num==0)
            // break;
            goto end;
        }
        
      }
      
      end:
    return 0;
}
