#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf(" Tell in which of the followint subjects you are passed to avail your");
    printf(" gift\n  1.Maths \n 2.Science  \n 3. Both \n , Type the subject number\n");

     scanf("%d" ,&a);

    if (a==1||a==2)
     {

         printf("congratulations you got gift of 15 rupees\n");
     }

     else 
     {
        printf("You got gift of 45 rupees");
     }
        

    return 0;
}
