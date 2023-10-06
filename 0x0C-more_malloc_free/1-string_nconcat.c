#include "main.h"

/**
 * string_nconcat -  that concatenates two strings.
 *
 * @s1: parm
 * @s2: parm
 * @n: parm
 * Return: always tmp, NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len, lens1;
	char *conc;

	len = strlen(s1) + n;
	lens1 = strlen(s1);
	conc = (char *)malloc(sizeof(char) * len);
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		conc[i] = s1[i];
	for (i = lens1, j = 0; i < len; i++, j++)
		conc[i] = s2[j];
	return (conc);
}

