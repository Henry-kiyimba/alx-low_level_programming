#include "main.h"
/**
* string_ toupper - change all lowercase to upoercase
* @n: pointer
*
* Return: n
*/
char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
