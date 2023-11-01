#include "libft.h"

char    *ft_strnstr(const char *s, const char *find, size_t slength)
{
    size_t index;

    // checks if find is present or if s is equal to find, 
    // if it is, returns the s string
    if (*find == 0 || s == find)
        return ((char *)s);
    // checks if string  length is not null or 0
    if (!slength)
        return (NULL);
    index = ft_strlen(find);
    // loops through checking if 
    while (*s && index <= slength)
    {
        // checks if equal to 0, which means that the first index characters of s and find are the same
        // returns string after index it was found at
        if(!(ft_strncmp((char *)s, (char *)find, index)))
            return ((char *)s);
        slength--;
        s++;
    }
    return (NULL);
}

// similar to strstr, but with an additional parameter 
// to limit the search to a specific number of characters