#include "holberton.h"
/**
* _memcpy - copies memory area
* @dest: memory area for source to be copied to
* @src: memory are that n bytes are copied from
* @n: The number of bytes to be copied.
*
* Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
/* Typecast src and dest addresses to (char *) */
char *csrc = (char *)src;
char *cdest = (char *)dest;
unsigned int i;

/* Copy contents of src[] to dest[] */
for (i = 0; i < n; i++)
cdest[i] = csrc[i];

return (dest);
}
