#include "main.h"
/**
 * puts2 - prints every other character;
 * @str : string pointer
 * Return : void
*/

void puts2(char *str)
{
int len = 0;
while (len >= 0)
{
if (str[len] == '\0')
{
_putchar('\n');
break;
}
if (len % 2 == 0)
{
_putchar(str[len]);
}
len++;
}
}
