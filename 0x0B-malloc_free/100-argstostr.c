#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *strconcat(char *s1, char *s2, int ss);
char *argstostr(int ac, char **av)
{
char *conc;
int _size, i;

i = 0;
while (i < ac)
{
_size = _size + strlen(av[i]) + 1;
i++;
}
conc = (char *)malloc(sizeof(char) * _size);
if (conc == NULL)
{
return (NULL);
}
i = 0;
while (i < ac)
{
if (conc == NULL)
{
return (NULL);
}
printf("4ggg4bbbbbbbb\n");
_size = _size - strlen(av[i]);
printf("4hhh4bbbbbbbb\n");
conc = strconcat(conc, av[i], _size);
printf("4tiuyrtdrg4bbbbbbbb\n");
i++;
}
printf("44bbbbbbbb\n");
return (conc);
}

char *strconcat(char *s1, char *s2, int ss)
{
	char *conc;
	unsigned int _size, i, j;

	i = 0;
	j = 0;
	_size = ss;
	conc = (char *)malloc(sizeof(char) * _size);
	if (conc == NULL)
	{
		return (NULL);
	}
	while (s1 != NULL)
	{
		if (s1[i] == '\0')
		{
			conc[i] = '\n';
		}
		conc[i] = s1[i];
		i++;
	}
	while (_size >= i && s2 != NULL)
	{
		conc[i] = s2[j];
		j++;
		i++;
	}
	return (conc);
}