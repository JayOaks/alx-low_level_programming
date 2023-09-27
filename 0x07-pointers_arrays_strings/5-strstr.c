#include "main.h"

/**
* *_strstr - Entry point
* Description: Locates a substring
* @haystack: Character (array of characters)
* @needle: Character
* Return: char
**/

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return ('\0');
}
