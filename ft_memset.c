#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    size_t index;

    index = 0;
    //checks if both are true values
    if (!b && !len)
        return (NULL);
    //loops through 'b' array replacing all index less than lenght values with int C (Ascii)
    while (index < len)
    {
        //set each byte to c accurately, even if c is outside the range of 0 to 255
        ((unsigned char *)b)[index++] = c;
    }
    return (b);
}

// to set a block of memory to a specific value. 
// it is often used to initialize arrays with a particular value.