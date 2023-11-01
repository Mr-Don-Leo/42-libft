#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	indexOne;
	size_t	indexTwo;
	char	*sub;

	indexTwo = 0;
	indexOne = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		return (ft_strdup((char *)(s)));
	while (indexTwo < len && s[indexTwo + start])
		indexTwo++;
	sub = (char *)malloc(sizeof(char) * (indexTwo + 1));
	if (!sub)
		return (NULL);
	indexTwo = 0;
	while (indexOne < ft_strlen(s) && indexTwo < len)
		sub[indexTwo++] = s[indexOne++];
	sub[indexTwo] = '\0';
	return (sub);
}