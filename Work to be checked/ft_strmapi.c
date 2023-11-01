// #include "libft.h"

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	int		index;
// 	char	*map;

// 	if (!s || !f)
// 		return (NULL);
// 	map = ft_strdup(s);
// 	if (!map)
// 		return (NULL);
// 	index = 0;
// 	while (map[index])
// 	{
// 		map[index] = f(index, map[index]);
// 		index++;
// 	}
// 	return (map);
// }