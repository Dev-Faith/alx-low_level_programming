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
   int len1, len2, i;
   len1 = strlen(dest);
   len2 = strlen(src);
   for (i=0; i<=n; i++)
   {
       dest[len1+i]=src[i];
       printf("Your name: %s\n", dest);
   }
}
