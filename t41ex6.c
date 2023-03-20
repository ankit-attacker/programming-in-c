//  Making parser in C  for sample HTML code  which  extract the text and remove white spaces;
//     Input  - for eg. char string[] = "<h> Ankit yadav is the number one person in the world<h>"
//            parser(string);                   //void parser
//     output - This is a heading

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
  int in = 0; // variable to track whether we are inside the tag
  int index = 0;
  for (int i = 0; i < strlen(string); i++)
  {
    if (string[i] == '<')
    {
      in = 1;
      continue;
    }
    else if (string[i] == '>')
    {
      in = 0;
      continue;
    }

    if (in == 0)
    {
      string[index] = string[i];
      index++;
    }
  }
  string[index] = '\0';

  // remove the trailing spaces  from the begnning
    while(string[0] ==' ')
  {
    // shift the string to the left
    for (int i = 0; i < strlen(string); i++)
    {
      string[i] = string[i + 1];
    }
  }

  // remove the trailing spaces from end
  while(string[strlen(string) -1] == ' ')
  {
    string[strlen(string) - 1 ] = '\0';
  }
}

int main()
{
  char string[] = "<h>      Ankit yadav is the number one person in the world    <h>";
  parser(string);
  printf("The parsed string is ~~%s~~\n", string);

  return 0;
}