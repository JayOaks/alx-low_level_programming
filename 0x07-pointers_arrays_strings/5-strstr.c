#include "main.h"

/**
 * *_strstr - Entry point
 * Description: Locates a substring
 * @haystack: Character
 * @needle: Character
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
    if (haystack == NULL || needle == NULL)
    {
        return (NULL);
    }
    
    while (*haystack != '\0')
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

return (NULL);
}
