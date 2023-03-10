#include "main.h"

/**
 * _strcat - concatenate two strings
 * using at most  n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j > n)
	{
		det[j] = '\0';
		j++;
	}
	return (dest);
}
