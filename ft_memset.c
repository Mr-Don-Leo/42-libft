#include "libft.h"

/*
Memset first checks if the memory b 'b' and 'len' are available
from which it loops through checking while index is less than len, 
assigning each memory space the index points to of 'b' with the c 'c', 
while incrementing the index.
*/
void *ft_memset(void *b, int c, size_t len)
{
    size_t index;

    index = 0;
    if ( !b && !len )
        return (NULL);
    while (index < len)
    {
        ((unsigned char *)b)[index] = c;
        index++;
    }
    return (b);
}