#include "shell.h"

/**
 **_strncpy - copies a string
 *@dest: the destination string to be copied to
 *@src: the source string
 *@n: the amount of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, q;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		q = i;
		while (q < n)
		{
			dest[q] = '\0';
			q++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int t, j;
	char *s = dest;

	t = 0;
	j = 0;
	while (dest[t] != '\0')
		t++;
	while (src[j] != '\0' && j < n)
	{
		dest[t] = src[j];
		t++;
		j++;
	}
	if (j < n)
		dest[t] = '\0';
	return (s);
}

/**
 **_strchr - locates character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char z)
{
	do {
		if (*s == z)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

