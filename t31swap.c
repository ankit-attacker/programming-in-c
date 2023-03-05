#include<stdio.h>
int a,b,c,d,e,x,y,p,q;
void swap(int x,int y)    // call by value
{
       c=x;
       x=y;
       y=c;

       printf("After swapping the values are %dand%d",a,b);
}

void SWAP(int *p,int *q)   // call by refrence     
{
       d=*p;
       *p=*q;
       *q=d;

       printf("After swapping the values are %d and %d\n",a,b);
}
int main() 
{
       printf("Enter the values which you want to swap\n");
       scanf("%d\n%d", &a,&b);
       printf("Your entered values are %d and %d\n", a ,b);
       printf("enter 1 for using call by value system or' enter 0 for using call by refrence system \n");
        scanf("%d\n",&e);
       if(e==1)
       {
       swap( a, b);
       };
       if(e==0)
       {
         SWAP( &a, &b);
       };
    return 0;
}