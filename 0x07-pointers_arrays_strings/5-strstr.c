#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: first parm
 * @needle: second parm
 *
 * Return: ret
 */

char *_strstr(char *haystack, char *needle)
{
char *ret;

ret = strstr(haystack, needle);
return (ret);
}
