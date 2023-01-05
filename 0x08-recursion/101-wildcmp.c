#include "main.h"
/**
 * @brief 
 * 
 * @s1: 
 * @s1: 
 *  
 */
int _comp(*s1, *s2, i);
int wildcmp(char *s1, char *s2)
{
int i;

i = 0;
return (_comp(s1, s2, i));
}

int _comp(*s1, *s2, i)
{
if ((s1 + i) != '\0' && (s + i) != '\0')
{
if ((s1 + i) != (s2 + i))
{
return (0);
}
i++;
_comp((s1 + i), (s2 + i), i);
}
}
