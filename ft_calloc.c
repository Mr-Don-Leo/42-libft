#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    size_t index;
    void *output;

    //checking for potential risk in int overflow;
    // SIZE_MAX is the maximum a size_t datatype can hold in bytes.
    // dividing size_max by size calculates the maximum amount of elements
    // that can be allocated. then checks if it is less than the given count, so 
    // it doesnt overflow.
    if (size && SIZE_MAX / size < count)
        return (0);
    // calculates the needed memory
    index = count*size;
    // malloc the amount onto output, then return output.
    output = malloc(index);
    if (!output)
        return(NULL);
    ft_memset(output, 0, count);
    return (output);
}
