#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
*positive_or_negative(int i)- checks whether number is positive
* @i: is an integer
* Return : Return void
**/

void positive_or_negative(int i)
{
if (i % 2 == 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is negative\n", i);
}
}

#endif /* MAIN_H */
