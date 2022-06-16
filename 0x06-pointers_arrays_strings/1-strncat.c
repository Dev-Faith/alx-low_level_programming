#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strncat - concatenates string values
* @dest: a pointer
* @src: a pointer
* @n: a param
*/
char *_strncat(char *dest, char *src, int n)
{
    strncat(dest, src, n);
}
