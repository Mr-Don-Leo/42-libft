#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int slen;

	slen = ft_strlen(s);

	while (slen >= 0)
	{
		if (s[slen] == (char)c)
			return ((char *)s + slen);
		slen--;
	}
	return (0);
}