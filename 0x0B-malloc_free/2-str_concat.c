#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, k, limit;
	char *ptr;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1  = 0;
	while (s1[len1] != '\0')
	{
		i++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		ci++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		free (ptr);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s[i];
	}

	for (j = 0; j <= len2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
