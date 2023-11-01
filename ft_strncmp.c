#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t index;

    index = 0;
    if (!n)
    {
        return (0);
    }
    // same method as in strlcpy besides checking if both index's match, if they dont it breaks the loop and
    // takes the index to the returrn value
    while (s1[index] && index < n - 1 && s1[index] == s2[index])
    {
        index++;
    }
    // returned unsigned since ascii does not go negative
    return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

//compare two strings up to a specified number of characters or until a null terminator