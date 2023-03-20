#include<stdio.h>

void printstar(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main() 
{
    // char str[] = {'a','n','k','i','t','\0'};
    // char str[5] = "ankit";
    char str[34];
    gets(str);         //TAKING INPUT IN STRING FROM USER , we can take whitespace as input also   
     printstar(str);    //   we can't take white spaces  using scanf 
     printf("using puts\n");  
     puts(str);               // puts will add new line character, after puts statement character will go to new line;
     puts(str);             


    return 0;
}