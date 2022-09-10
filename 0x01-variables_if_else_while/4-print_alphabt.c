#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) 
{
   char ch;

   for(ch = 97 ; ch <= 122 ; ch++)
   {
      if (ch != 65 && ch != 71 )
      {
        putchar(ch);
      }
      
   }
   putchar('\n');
   return(0);
}