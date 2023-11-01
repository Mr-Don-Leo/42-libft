#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	index;

	index = 1;
	while (n /= 10)
		index++;
	return (index);
}

char			*ft_itoa(int n)
{
	char		*num_str;
	size_t		digits;
	long int	number;

	number = n;
	digits = get_digits(n);
	if (n < 0)
	{
		number *= -1;
		digits++;
	}
	if (!(num_str = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	*(num_str + digits) = 0;
	while (digits--)
	{
		*(num_str + digits) = number % 10 + '0';
		number = number / 10;
	}
	if (n < 0)
		*(num_str + 0) = '-';
	return (num_str);
}