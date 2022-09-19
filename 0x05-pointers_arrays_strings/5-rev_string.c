#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to an char as parameter
 * Return: return void
 */
 void rev_string(char *s)
{
char *s2, *p1, *p2;

p1=s+strlen(s)-1;
    p2=s2;
    while(p1>=s)
    {
       *p2=*p1;
        p2++;
        p1--;
    }
    *p2='\0';
}
