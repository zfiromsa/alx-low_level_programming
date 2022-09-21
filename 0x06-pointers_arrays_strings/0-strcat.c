#include <strio.h>
#include "main.h"

char *_strcat(char *dest, char *stc)
{
int i, len, len1, len2;

i = 0;
len1 = strlen(stc);
len2 = strlen(dest);
len = len1 + len2 - 1;
while(i < len)
{
stc[len1 + i] = dest[i];
i++;
}
}
