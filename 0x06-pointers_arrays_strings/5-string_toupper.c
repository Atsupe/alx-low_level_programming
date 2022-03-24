#include "main.h"

/**
* string_toupper - Function that reverses the content of an array of integers.
*
* @ch: ch is the array
*
* Return: Always 0.
*/
char *string_toupper(char *ch)
{
int i = 0;

while (ch[i] != '\0')
{
if (ch[i] >= 'a' && ch[i] <= 'z')
ch[i] = 'A' + (ch[i] - 'a');
i++;
}
return (ch);
}
