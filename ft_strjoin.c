#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int indexOne;
    int indexTwo;
    char *result;

    if (!s1 || !s2)
        return (NULL);
    result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!result)
        return (NULL);
    indexOne = 0;
    while (s1[indexOne])
    {
        result[indexOne] = s1[indexOne];
        indexOne++;
    }
    indexTwo = 0;
    while (s2[indexTwo])
    {
        result[indexOne++] = s2[indexTwo++];
    }
    result[ft_strlen(s1) + ft_strlen(s2)] = '\0';
    return (result);
}