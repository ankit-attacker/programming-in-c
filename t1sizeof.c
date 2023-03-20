#include<stdio.h>  // DATA TYPES
int main(int argc, char const *argv[])
{
    printf("%lu\n" ,sizeof(int) );   //4
    printf("%lu\n" ,sizeof(float) );  //4
    printf("%lu\n" ,sizeof(double) ); //8
    printf("%lu\n" ,sizeof(char) );    //1
    printf("%lu\n" ,sizeof(long) );    //4
    printf("%lu\n" ,sizeof(void) );    //1
    return 0;
}

