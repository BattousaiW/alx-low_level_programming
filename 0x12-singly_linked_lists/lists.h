#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

typedef struct node
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif