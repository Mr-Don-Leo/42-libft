#include "libft.h"

void    *memchr(const void *s, int c, size_t n)
{
    size_t index;

    index = 0; 
    while(index < n)
    {
        //while looping through index less than the length of string
        // it checks if the character on position index is equal to
        // character c, if it is, it returns s+index, which results in
        // the exact memory address within the memory block
        if (((unsigned char *)s)[index] == (unsigned char)c)
            return((void *)(s+index));
        index++;
    }
    return (0);
}
