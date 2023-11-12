#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t index;
    unsigned char *dst1 = (unsigned char *)dst;
    unsigned char *src1 = (unsigned char *)src;

    index = 0;
    if (!dst1 && !src1)
        return (0);
    while (index < n)
    {
        dst1[index] = src1[index];
        index++;
    }
    return (dst);
}