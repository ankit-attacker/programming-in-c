#include<stdio.h>

int main(int argc, char const *argv[])
{
    int  i,j;
    for(i=0 , j<3; i<5;i++)   // inside for loop some statements are optional
    {
        printf("%d %d\n" , i ,j);
    }
   
    for(; j=0,i<5;i++)
    {
        printf("%d %d\n" , i ,j);
    }
    return 0;
}