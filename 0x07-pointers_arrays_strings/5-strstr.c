#include "main.h"
/**
 * *_strstr - function finds the first occurrence
 * of the substring needle in the string haystack.
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
        while (*haystack)
        {
                char *i = haystack;
                char *j = needle;

                while (*i == *j && *j != '\0')
                {
                        i++;
                        j++;
                }

                if (*j == '\0')
                        return (haystack);

                haystack++;
        }

        return ('\0');
}
