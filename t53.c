#include<stdio.h>
int main() 
{
     int a =34 ;
                      // It is not a garuntee that a uninitialize pointer can point a garvez value or null;
      int *ptr=&a;    // pointer ko null kar dena chahiye agar ham usko aage derefrence karne wale hai to 
       printf("The address of a is %d", ptr );   // taki ham check kar sake agar ye pointer null nhi hai tabhi
       ptr=NULL;                                 // isko derefrence kro  
       printf("The address of a is %d", ptr );     // null pointer can't be dereferenced;


    return 0;
}