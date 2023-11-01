#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

// resets all N selected values in S with zeros