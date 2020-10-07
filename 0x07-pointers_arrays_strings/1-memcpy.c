#include "holberton.h"
/**
* _memcpy - Function that copies memory area.
* @dest: memory area for source to be copied to
* @src: memory are that n bytes are copied from
* @n: The number of bytes to be copied.
*
* Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int mem; /* mem = memory */

    for (mem = 0; mem < n; mem++)
    {
        *(dest + mem) = *(src + mem);
    }
return (dest);
}
/*
* First code and comments below. Code is below COMMENT>
* COMMENT> Typecast src and dest addresses to (char *)
* char *csrc = (char *)src;
* char *cdest = (char *)dest;
* unsigned int i;
*
* COMMENT> Copy contents of src[] to dest[]
* for (i = 0; i < n; i++)
* cdest[i] = csrc[i];
*
*return (dest);
*/
