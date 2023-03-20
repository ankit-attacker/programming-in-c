// take input as 1,2.. from user to print triangular , reversed triangular star pattern

#include<stdio.h>
int main() 
{
     int a;
       printf("Enter 1 for triangular star pattern or' enter 2 for reversed triangular star pattern\n" );
      scanf("%d",&a);
      switch(a)
      {
        case 1:
        {
         for(int i =0;i<4; i++)
          for (int j = 0; j <= i; j++)
          {
            printf("*");
          }
          printf("\n");
         break;
        }
      case 2:
      {
          for (int i =4;i>0; i--)
        {
          for (int j = 0; j < i; j++)
          {
            printf("*");
          }
          printf("\n");
        }
        break;
      }
      }

    return 0;
}