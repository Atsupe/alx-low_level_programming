#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @dest: s1
 * @src: s2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j = 0;

for (i = 0;dest[i] != '\0'; i++)
;
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}

return (dest);
}
