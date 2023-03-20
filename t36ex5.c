#include<stdio.h>
                                                    // 5 GHANTE LAG GYE YAR
int arrayRev(int array[],int p)
{
     int c, i=0;
     do
     {
      c =array[i];
      array[i]=array[p-(i+1)];
      array[p-(i+1)]=c;
        i++;

   } while (i<(p+1)/2);

}

int main() 
{
     printf("enter size of array\n");
     int n;
     scanf("%d",&n);
     printf("Enter the elements of array which you want to reverse");
     int array[n];
     for (int i = 0; i < n; i++)
     {
        scanf("%d",&array[i]);
     }
    
     printf("Array entered by you is\n");
     for (int  i = 0; i<n; i++)
     {
        printf("%d\t",array[i]);
     }
     printf("\n");
     arrayRev(array,n);
     
     printf("The reversed array is\n");
     for (int  i = 0; i<n; i++)
     {
        printf("%d\t",array[i]);
     }
     printf("\n");

    return 0;
}