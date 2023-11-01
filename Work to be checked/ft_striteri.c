#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	indexOne;
	int	indexTwo;

	indexOne = 0;
	indexTwo = 0;
	if (!s)
		return ;
	indexOne = ft_strlen(s);
	while (indexTwo < indexOne)
	{
		(*f)(indexTwo, s);
		s++;
		indexTwo++;
	}
}