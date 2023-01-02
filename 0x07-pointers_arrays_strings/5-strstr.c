#include "main.h"
#include <string.h>
/**
 * _memcpy - func that locates a substring.
 * @haystack: first parm
 * @needle: second parm
 *
 * return: ret
 */

char *_strstr(char *haystack, char *needle)
{
char *ret;

ret = strstr(haystack, needle);
return (ret);
}
