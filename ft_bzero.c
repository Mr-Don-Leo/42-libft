#include "libft.h"

/*
Sets memory of a block to 0 no matter what
*/
void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}