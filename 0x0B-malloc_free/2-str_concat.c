#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first parm
 * @s2: second parm
 * Return: NULL or conc
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int _size, i, j, _s1, _s2;

	i = 0;
	j = 0;
	if (s1 == NULL  && s2 == NULL)
	{
		_s1 = 0;
		_s2 = 0;
	}
	else if (s1 == NULL)
	{
		_s1 = 0;
	}
	else if (s2 == NULL)
	{
		_s2 = 0;
	}
	else if (s1 != NULL  && s2 != NULL)
	{
		_s1 = strlen(s1);
		_s2 = strlen(s2);
	}
	else if (s1 == NULL)
	{
		_s1 = strlen(s1);
	}
	else if (s2 == NULL)
	{
		_s2 = strlen(s2);
	}
	_size = _s1 + _s2;
	conc = (char *)malloc(sizeof(char) * _size);
	if (conc == NULL)
	{
		return (NULL);
	}
	while (s1 != NULL)
	{
		if (s1[i] == '\0')
		{
			break;
		}
		conc[i] = s1[i];
		i++;
	}
	if (s2 == NULL)
	{
		conc[i] = '\0';
		return (conc);
	}
	while (_size >= i || s2 != NULL)
	{
		conc[i] = s2[j];
		j++;
		i++;
	}
	return (conc);
}

