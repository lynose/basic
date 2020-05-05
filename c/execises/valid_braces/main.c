#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool valid_braces( char* braces )
{
    bool brackets   = false;
    bool parenthese = false;
    bool curly      = false;

    if (strlen(braces) == 0)
    {
        return false;
    }

    for (int i=0; i < strlen(braces); i++)
    {

      if ((braces[i] == '}') && (parenthese == false))
      {
          return false;
      }
      if ((braces[i] == ']') && (brackets == false))
      {
          return false;
      }
      if ((braces[i] == ')') && (curly == false))
      {
          return false;
      }
      if ((braces[i] == '{')&&(parenthese == true))
      {
          return false;
      }
      if ((braces[i] == '[')&&( brackets==true))
      {
          return false;
      }
      if ((braces[i] == '(') && ( curly==true))
      {
          return false;
      }
      if (braces[i] == '{')
      {
          parenthese = true;
      }
      if (braces[i] == '[') 
      {
          brackets = true;
      }
      if (braces[i] == '(')
      {
          curly = true;
      }
    }
    return true;
}

int main(int argc, char *argv[])
{
    char *test = "[][]";
    if(valid_braces(test)==true)
    {
        puts("Happy");
    }
    return 0;
}

