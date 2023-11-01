#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
    size_t index;

    //checks if pointers of both are null, if so returns
    if (!dst && !src)
        return (0);
    index = 0;
    while (index < len)
    {
        // while looping through index less than length
        //  it assigns src with index, to dst on index
        ((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
        index++;
    }
    return (dst);
}

//copying a block of memory from one location to another
//CHAR SRC = "HELLO WORLD";
//CHAR DST[20];
//
//SRC -> DST