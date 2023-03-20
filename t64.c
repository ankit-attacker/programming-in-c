/* wokring with files in c ,
                           we have to declare a pointer of type FILE,stdio.h contain fopne();
                     mode eg. w(write),wb,rb(read/write in binary mode),a(purana content na jaye , agge apend karega), 
                     r^+(we can do reading and writing both, jitne character hamnne write kiye wo replace ho gye) ,
                      w^+ ( first truncates previous file if exist othw create new , pure file khali kar dega)

 OPENING A FILE        syntax       ptr = fopen(" filename","mode") ,

CLOSING A FILE        (all files needs to closed)     "fclose(fptr)";

 READING A FILE           , we use 'fscanf' function,to use this we have to opne file in read mode
                           fscanf expects a file pointer in addition to the other arguments which scanf expects
                           syntax - "fscanf(ptr,"%s",string)"       

WRITING TO A FILE        , we use fprintf func.    , we have to opne the file in write mode    
                           syntax - " fprintf(ptr,"%s",string); "  */

#include<stdio.h>
int main() 
{

    FILE *ptr = NULL;                       // puri file ab control me aa chuki hai
    FILE *ptr1 = NULL;
    char string[101]= "This content was produced by tuturial64.c \n Hi Ankit Yadav Ji , How are you";

    // ****Reading a file****8
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr,"%s",string);
    printf("The content of this file has %s\n", string);
     fclose(ptr);

    // *******Writing a file*****
     ptr1= fopen("myfile.txt","w");    // check once for opening in append mode afer write mode, best mode;
     fprintf(ptr1,"%s",string);

    return 0;
}
