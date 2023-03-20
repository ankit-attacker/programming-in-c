#include<stdio.h>     // ctrl+g    - to navigate between lines;


int main() 
{
     FILE * ptr=NULL;
     ptr = fopen("myfile.txt", "w+");
     /*char c = fgetc(ptr);
     
      printf(" The character I wirte was %c", c  );
       c = fgetc(ptr);
      printf(" The character I wirte was %c", c  );
     fclose(ptr);

     char str[4];
     fgets(str, 4, ptr);
     printf("the string is %s\n", str);*/

     fputc('o',ptr);
     fputs("This is ankit yadav", ptr);

    return 0;
}