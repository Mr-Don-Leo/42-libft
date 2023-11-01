#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    while ((char)c != *s)
    {
        // looping through pointer s, while its not C, if it is not in S, it terminates null
        // if it is found, it breaks the loop at that position and returns the pointer S at location
        if (!*s)
            return (NULL);
        s++;
    }
    return ((char *)s);
    
}

// locate the first occurrence of a specified character in a string
// 'o' in "hello world!" -> 4 or "o  world!"
