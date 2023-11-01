#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t index;

    index = 0;
    while (index < n)
    {
        //while looping though index, it checks if s1 and s2 have matching 
        //unsigned characters, if not, it turns the subtraction of s1 -  s2
        // using unsigned, which covers all possible byte values 
        if (((unsigned char *)s1)[index] != ((unsigned char *)s2)[index])
            return (((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
        index++;
    }
    return (0);
}

//to compare the content of two memory regions,
//used for checking if two data buffers are equal.