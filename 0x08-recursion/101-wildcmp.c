#include "main.h"
/**
 * @brief
 *
 * @s1:
 * @s1:
 *
 */
int _comp(char *s1, char *s2, int i);
int wildcmp(char *s1, char *s2)
{
int i;

i = 0;
return (_comp(s1, s2, i));
}

int _comp(char *s1, char *s2, int i)
{
if ((*s1 + i) != '\0' && (*s2 + i) != '\0')
{
if ((*s1 + i) != (*s2 + i))
{
return (1);
}
i++;
_comp((s1 + i), (s2 + i), i);
}
return (0);
}
