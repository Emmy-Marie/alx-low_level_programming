#include "main.h"

/**
 * _strcpy - Copy the string pointed to by source to the buffer pointed
 *           by the destination.
 * @dest: destination pointer
 * @src: Source pointer
 * Return: The destination pointer.
 */

char *_strcpy(char *dest, char *src)
{
	char *origin_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (origin_dest);
}
