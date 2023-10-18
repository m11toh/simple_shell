#include "shell.h"

/**
 **_strncpy - copies string
 *@dest: destination string to be copied to
 *@src: source string
 *@n: amount of characters to be copied
 *Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k, j;
	char *s = dest;

	k = 0;
	while (src[k] != '\0' && k < n - 1)
	{
		dest[k] = src[k];
		k++;
	}
	if (k < n)
	{
		j = k;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **strncat - concatenates two strings
 *@dest: first string
 *@src: second string
 *@n: amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, j;
	char *s = dest;

	k = 0;
	j = 0;
	while (dest[k] != '\0')
		k++;
	while (src[j] != '\0' && j < n)
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	if (j < n)
		dest[k] = '\0';
	return (s);
}

/**
 **_strchr - locates character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

