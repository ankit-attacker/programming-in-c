#include<stdio.h>

int main(int argc, char const *argv[])
{
      int marks ,age;
      printf("Enter your age\n");
      scanf("%d" ,&age);
     
      printf("Enter your marks\n");
      scanf("%d" ,&marks);
   
    
    switch (age)
    {
    case 3:
        printf("The age is 3\n");

        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;
        
        default:
            printf("Your marks are not 45");
            
        }
        break;

    case 13:
        printf("The age is 13");
        break;
    case 23:

        printf("The age is 23");
       //break;
 
    
    default:
        printf("Age is not 3, 13 or 23");
        break;
    }
          return 0;
}
