#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps values of two integers
 * @a: params
 * @b: params
 */
void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
