#include <stdio.h>
#include "lists.h"
/**
 * print_list- prints a list of nodes
 * @h: list to be printed
 * Return: return count
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
