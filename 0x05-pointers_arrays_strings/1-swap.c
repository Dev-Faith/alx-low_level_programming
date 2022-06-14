#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps values of two integers
 * @a: params
 * @b: params
 */
void swap_int(int *a, int *b)
{
int p;
int n;
p = &b;
n = &a;
*a =p;
*b =n;
}
