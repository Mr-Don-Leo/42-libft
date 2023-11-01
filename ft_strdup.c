#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char	*s;

	s = malloc(ft_strlen(s1) + 1);
	if (!s)
		return (NULL);
	s = ft_memcpy(s, s1, ft_strlen(s1) + 1);
	return (s);
}