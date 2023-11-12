#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dest1;
    unsigned char *src1;

    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    if (!dest1 && !src1)
        return (NULL);
    if (dest < src)
        ft_memcpy(dest, src, n);
    else
    {
        while (n--)
        {
            *(dest1 + n) = *(src1 + n);
        }
    }
    return (dest1);
}
