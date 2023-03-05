#include<stdio.h>
int main() 
{
     int a =34, arr[]={1,2,3,4,5,6,67};
     int *ptra = &a;
       printf("%d\n", ptra );
       printf("%d\n", ++ptra );
       printf("%d\n", ptra+2);

     char b =43;
     char *ptrb = &b;
       printf("%d\n", ptrb);
       printf("%d\n", ptrb+1);

       printf("%d\n", arr[3]);
       printf("%d\n", &arr[0]);   // address of array
       printf("%d\n", &arr[1]);

       printf("%d\n", *(&arr[0]));
       printf("%d\n", *(arr));
       printf("%d\n", *(&arr[1]));   // address of array
       printf("%d\n", *(arr+1));

        // arr++;                  // will give error we can't modify base address;
      int * arrptr = arr;             
       arrptr++;
       

    return 0;
}